#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "atcmd.h"
#include "atcmd_general.h"
#include "atcmd_general_def.h"
#include "atcmd_sleep.h"
#include "atcmd_sleep_def.h"
#include "atcmd_serial_port.h"
#include "atcmd_serial_port_def.h"
#include "atcmd_misc.h"
#include "atcmd_misc_def.h"
#ifndef RUI_BOOTLOADER
#if WAN_TYPE == 0
#include "atcmd_key_id.h"
#include "atcmd_key_id_def.h"
#include "atcmd_join_send.h"
#include "atcmd_join_send_def.h"
#include "atcmd_nwk_management.h"
#include "atcmd_nwk_management_def.h"
#include "atcmd_class_b_mode.h"
#include "atcmd_class_b_mode_def.h"
#include "atcmd_info.h"
#include "atcmd_info_def.h"
#include "atcmd_multicast_def.h"
#include "atcmd_multicast.h"
#include "atcmd_supplement.h"
#include "atcmd_supplement_def.h"
#include "atcmd_p2p.h"
#include "atcmd_p2p_def.h"
#endif
#endif
#include "udrv_serial.h"
#include "service_mode_cli.h"


#ifdef RUI_BOOTLOADER
__attribute__((section(".bootloader_new"))) void At_RespOK (char* pStr)
#else
void At_RespOK (char* pStr)
#endif
{
    atcmd_printf("\r\nOK\r\n");
}

#ifdef RUI_BOOTLOADER
__attribute__((section(".bootloader_new"))) int parseBuff2Param(char* bufCmd, stParam* pParam, uint8_t maxargu)
#else
int parseBuff2Param(char* bufCmd, stParam* pParam, uint8_t maxargu)
#endif
{
	int buflen, i;
	const char delimiters = ',';

    buflen = strlen (bufCmd);
	if (strlen (bufCmd) == 0) 
		return AT_PARAM_ERROR;

    if(maxargu == 0)
        maxargu = MAX_ARGUMENT;

    pParam->argc = 1;
    pParam->argv[pParam->argc - 1] = &bufCmd[0];
    i = 0;
    while(pParam->argc < maxargu)
    {
        for(; i < buflen ; i++)
        {
            if(bufCmd[i] == delimiters)
            {
                bufCmd[i] = 0;
                break;
            }
        }
        if(i == buflen)
			break;
        if(bufCmd[i + 1] != 0)
        {
            pParam->argc += 1;
            pParam->argv[pParam->argc - 1] = &bufCmd[i + 1];
        }
        else {
            break;
        }
    }
    
	return 0;
}

const char *atcmd_err_tbl[] =
{
	"OK",
	"AT_ERROR",
	"AT_PARAM_ERROR",
	"AT_BUSY_ERROR",
	"AT_TEST_PARAM_OVERFLOW",
	"AT_NO_CLASSB_ENABLE",
	"AT_NO_NETWORK_JOINED",
	"AT_RX_ERROR",
    "AT_MODE_NO_SUPPORT"
};

const at_cmd_info atcmd_info_tbl[] =
{
/* General Command */
    {ATCMD_ATTENTION,/*0*/          At_Attention,          0, ""},
    {ATCMD_REBOOT,   /*1*/          At_Reboot,             0, "triggers a reset of the MCU"},
    {ATCMD_ATR,      /*3*/          At_Restore,            0, "restore default parameters"},
    {ATCMD_BOOT,     /*4*/          At_Dfu,                0, "enter bootloader mode for firmware upgrade"},
#ifndef RUI_BOOTLOADER
    {ATCMD_SN,       /*87*/         At_Sn,                 0, "get or set the serial number of the device"},
    {ATCMD_BAT,      /*15*/         At_GetBat,             0, "get the battery level"},
    {ATCMD_BUILDTIME,/*5*/          At_GetFwBuildTime,     0, "get the build time of the firmware"},
    {ATCMD_REPOINFO, /*6*/          At_GetFwRepoInfo,      0, "get the commit ID of the firmware"},
    {ATCMD_FWVER,    /*7*/          At_GetFwVersion,       0, "get the version of the firmware"},
    {ATCMD_CLIVER,   /*8*/          At_GetCliVersion,      0, "get the version of the AT command"},
    {ATCMD_APIVER,   /*9*/          At_GetApiVersion,      0, "get the version of the RUI API"},
    {ATCMD_HWMODEL,  /*13*/         At_GetHwModel,         0, "get the string of the hardware model"},
    {ATCMD_HWID,     /*14*/         At_GetHwID,            0, "get the string of the hardware id"},
/* Sleep Command */
    {ATCMD_SLEEP,    /*85*/         At_Sleep,              0, "enter sleep mode for a period of time (ms)"},
    //{ATCMD_AUTOSLEEP,/*86*/         At_AutoSleep,          0, "automatically and periodically enter sleep mode (ms)"},
/* Serial Port Command */
    {ATCMD_LOCK,     /*10*/         At_Lock,               0, "lock the serial port"},
    {ATCMD_PWORD,    /*11*/         At_Pword,              0, "set the serial port locking password"},
    {ATCMD_BAUD,     /*12*/         At_Baud,               0, "get or set the serial port baudrate"},
    {ATCMD_ATM,      /*72*/         At_AtCmdMode,          0, "switch to AT command mode"},
    {ATCMD_APM,      /*73*/         At_ApiMode,            0, "switch to API mode"},
#if WAN_TYPE == 0
    {ATCMD_PAM,      /*74*/         At_TransparentMode,    0, "switch to pass through mode"},
/* LoRaWAN Keys and IDs */
    {ATCMD_APPEUI,   /*16*/         At_AppEui,             0, "get or set the application EUI"},
    {ATCMD_APPKEY,   /*17*/         At_AppKey,             0, "get or set the application key"},
    {ATCMD_APPSKEY,  /*18*/         At_AppSKey,            0, "get or set the application session key"},
    {ATCMD_DADDR,    /*19*/         At_DevAddr,            0, "get or set the device address"},
    {ATCMD_DEUI,     /*20*/         At_DevEui,             0, "get or set the device EUI"},
    {ATCMD_NETID,    /*21*/         At_NetId,              0, "get the network identifier (NetID) of 3 octets"},
    {ATCMD_NWKSKEY,  /*22*/         At_NwkSKey,            0, "get or set the network session key"},
/* LoRaWAN Joining and Sending */
    {ATCMD_CFM,      /*23*/         At_CfMode,             0, "get or set the confirmation mode (0-1)"},
    {ATCMD_CFS,      /*24*/         At_CfStatus,           0, "get the confirmation status of the last AT+SEND (0-1)"},
    {ATCMD_JOIN,     /*25*/         At_Join,               0, "join network"},
    {ATCMD_NJM,      /*26*/         At_NwkJoinMode,        0, "get or set the network join mode (0 = ABP, 1 = OTAA)"},
    {ATCMD_NJS,      /*27*/         At_NwkJoinStatus,      0, "get the join status"},
    {ATCMD_RECV,     /*28*/         At_Recv,               0, "print the last received data in hex format"},
    {ATCMD_SEND,     /*29*/         At_Send,               0, "send data along with the application port"},
    {ATCMD_LPSEND,   /*83*/         At_Lpsend,             0, "send long packet data (Maximum is 1024 bytes)"},
    //{ATCMD_USEND,   /*??*/         At_Lpsend,             0, "unified send packet along with the application port"},
    {ATCMD_RETY,     /*30*/         At_Retry,              0, "get or set the number of retransmission of confirm packet data"},
/* LoRaWAN Network Management */
    {ATCMD_ADR,      /*31*/         At_ADR,                0, "get or set the adaptive data rate setting (0 = off, 1 = on)"},
    {ATCMD_CLASS,    /*32*/         At_Class,              0, "get or set the device class"},
    {ATCMD_DCS,      /*33*/         At_DCS,                0, "get the ETSI duty cycle setting (0 = disabled, 1 = enabled)"},
    {ATCMD_DR,       /*34*/         At_DataRate,           0, "get or set the data rate (0-7 correspond to DR_0-DR_7)"},
    {ATCMD_JN1DL,    /*35*/         At_RxWin1JoinDelay,    0, "get or set the join accept delay between the end of TX and the join RX window 1 in second"},
    {ATCMD_JN2DL,    /*36*/         At_RxWin2JoinDelay,    0, "get the join accept delay between the end of TX and the join RX window 2 in second"},
    {ATCMD_PNM,      /*37*/         At_PubNwkMode,         0, "get or set the public network mode (0 = off, 1 = on)"},
    {ATCMD_RX1DL,    /*38*/         At_RxWin1Delay,        0, "get or set the delay between the end of TX and the RX window 1 in second"},
    {ATCMD_RX2DL,    /*39*/         At_RxWin2Delay,        0, "get the delay between the end of TX and the RX window 2 in second"},
    {ATCMD_RX2DR,    /*40*/         At_RxWin2DataRate,     0, "get or set the RX2 window data rate (0-7 correspond to DR_0-DR_7)"},
    {ATCMD_RX2FQ,    /*41*/         At_RxWin2Freq,         0, "get the RX2 window frequency"},
    {ATCMD_TXP,      /*42*/         At_TxPower,            0, "get or set the transmitting power"},
    {ATCMD_LINKCHECK,/*43*/         At_LinkCheck,          0, "Verify Network Link Status"},
/* LoRaWAN Class B */
    {ATCMD_PGSLOT,   /*44*/         At_PingSlot,           0, "get or set the unicast ping slot periodicity"},
    {ATCMD_BFREQ,    /*45*/         At_BeaconFreq,         0, "get the beacon frequency"},
    {ATCMD_BTIME,    /*46*/         At_BeaconTime,         0, "get the beacon time (GPS Epoch time)"},
    {ATCMD_BGW,      /*47*/         At_BGW,                0, "get the gateway GPS coordinate, NetID and GwID"},
    {ATCMD_LTIME,    /*48*/         At_LocalTime,          0, "get the local time in UTC format"},
/* LoRaWAN Information */
    {ATCMD_RSSI,     /*49*/         At_Rssi,               0, "get the RSSI of the last received packet"},
    {ATCMD_ARSSI,    /*75*/         At_Arssi,              0, "access all open channel rssi"},
    {ATCMD_SNR,      /*50*/         At_Snr,                0, "get the SNR of the last received packet"},
/* Supplementary Command */
#if defined( REGION_CN470 ) || defined( REGION_US915 ) || \
    defined( REGION_AU915 )
    {ATCMD_MASK,     /*51*/         At_Mask,               0, "get or set the channel mask to close or open the channel (only for US915, AU915, CN470)"},
    {ATCMD_CHE,      /*52*/         At_Che,                0, "get or set eight channels mode (only for US915 AU915 CN470)"},
    {ATCMD_CHS,      /*53*/         At_Chs,                0, "get or set single channels mode (only for US915 AU915 CN470)"},
#endif
    {ATCMD_BAND,     /*54*/         At_Band,               0, "get or set the active region"},
/* LoRaWAN P2P */
    {ATCMD_NWM,      /*55*/         At_NwkWorkMode,        0, "get or set the network working mode (0 = P2P_LORA, 1 = LoRaWAN, 2 = P2P_FSK)"},
    {ATCMD_PFREQ,    /*56*/         At_P2pFreq,            0, "Configure P2P Frequency"},
    {ATCMD_PSF,      /*57*/         At_P2pSF,              0, "Configure P2P Spreading Factor (5-12)"},
    {ATCMD_PBW,      /*58*/         At_P2pBW,              0, "Configure P2P Bandwidth(LORA:125,250,500 FSK:4800-467000)"},
    {ATCMD_PCR,      /*59*/         At_P2pCR,              0, "Configure P2P Code Rate(4/5=0, 4/6=1, 4/7=2, 4/8=3)"},
    {ATCMD_PPL,      /*60*/         At_P2pPL,              0, "Configure P2P Preamble Length (5-65535)"},
    {ATCMD_PTP,      /*61*/         At_P2pTP,              0, "Configure P2P TX Power(5-22)"},
    {ATCMD_PSEND,    /*62*/         At_P2pSend,            0, "P2P Send Data"},
    {ATCMD_PRECV,    /*63*/         At_P2pRecv,            0, "Set the timeout for the P2P window receive (0-65535)ms"},
    {ATCMD_PCRYPT,   /*64*/         At_P2pCrypt,           0, "Enable the P2P mode with Encryption KEY"},
    {ATCMD_PKEY,     /*65*/         At_P2pKey,             0, "Set the P2P mode with Encryption KEY"},
    {ATCMD_P2P,      /*66*/         At_P2p,                0, "View P2P All Parameters"},
    {ATCMD_PBR,      /*67*/         At_Pbr,                0, "get or set the P2P FSK modem bitrate (600b/s-307200b/s)"},
    {ATCMD_PFDEV,    /*68*/         At_Pfdev,              0, "get or set the P2P FSK modem frequency deviation (4800-467000)"},
/* LoRaWAN Multicast Group */
    {ATCMD_ADDMULC,  /*69*/         At_Addmulc,            0, "add a new multicast group"},
    {ATCMD_RMVMULC,  /*70*/         At_Rmvmulc,            0, "delete a multicast group" },
    {ATCMD_LSTMULC,  /*71*/         At_Lstmulc,            0, "view multicast group information"},
/* LoRaWAN RF Test */
    {ATCMD_TRSSI,  /*77*/           At_Trssi,              0, "start RF RSSI tone test"},
    {ATCMD_TTONE,  /*78*/           At_Ttone,              0, "start RF tone test"},
    {ATCMD_TTX,    /*79*/           At_Ttx,                0, "set number of packets send with RF LoRa test"},
    {ATCMD_TRX,    /*80*/           At_Trx,                0, "set number if packets receive for PER RF RX test"},
    {ATCMD_TCONF,  /*81*/           At_Tconf,              0, "configure LoRa RF test"},
    {ATCMD_TTH,    /*82*/           At_Tth,                0, "Starts RF Tx hopping test from Fstart to Fstop, with Fdelta steps"},
    {ATCMD_TOFF,   /*83*/           At_Toff,               0, "stop ongoing RF test"},
    {ATCMD_CERTIF,   /*??*/         At_Certif,             0, "set the module in LoraWAN Certification mode"},
#endif
/* Miscellaneous Command */
    //{ATCMD_DELBONDS, /*76*/         At_DelBLEBonds,        0, "delete all BLE bond information from flash memory"},
#else
/* Bootloader */
    {ATCMD_BOOTSTATUS ,             At_Bootstatus,         0, "get the status of the bootloader"},
    {ATCMD_FACTORY ,                At_Factory,            0, ""},
#endif

};

#ifdef RUI_BOOTLOADER
__attribute__((section(".bootloader_new"))) uint32_t At_CmdGetTotalNum (void)
#else
uint32_t At_CmdGetTotalNum (void)
#endif
{
    return sizeof(atcmd_info_tbl)/sizeof(at_cmd_info);
}

#ifndef RUI_BOOTLOADER
at_cmd_cust_info atcmd_cust_tbl[ATCMD_CUST_TABLE_SIZE];
#endif

#ifdef RUI_BOOTLOADER
__attribute__((section(".bootloader_new"))) static int At_CmdList (SERIAL_PORT port, stParam *param)
#else
static int At_CmdList (SERIAL_PORT port, stParam *param)
#endif
{
    int i = 0;
    atcmd_printf("\r\n");
    int num = sizeof(atcmd_info_tbl)/sizeof(at_cmd_info);
    for(i = 0;i<num;i++)
    {
        if(strlen(atcmd_info_tbl[i].CmdUsage)) {
            atcmd_printf("%s: %s\r\n", atcmd_info_tbl[i].atCmd, atcmd_info_tbl[i].CmdUsage);
        }
    }
#ifndef RUI_BOOTLOADER
    for(i = 0;i<ATCMD_CUST_TABLE_SIZE;i++)
    {
        if (atcmd_cust_tbl[i].atCmd != NULL) {
            uint8_t cust_atcmd_buff[CLI_BUFFER_SIZE+4];

            sprintf(cust_atcmd_buff, "%s%s", "ATC+", atcmd_cust_tbl[i].atCmd);

            if( strlen(atcmd_cust_tbl[i].CmdUsage)) {
                atcmd_printf("%s: %s, %s\r\n", cust_atcmd_buff, atcmd_cust_tbl[i].title, atcmd_cust_tbl[i].CmdUsage);
            }
        }
    }
#endif

    return AT_OK;
}

#ifdef RUI_BOOTLOADER
__attribute__((section(".bootloader_new"))) int At_Parser (SERIAL_PORT port, char *buff, int len)
#else
int At_Parser (SERIAL_PORT port, char *buff, int len)
#endif
{
    int i, j, help = 0;
    int	nRet = AT_ERROR;
    char cmd[MAX_CMD_LEN], operat = 0; //cmd len 32 should be enough
    stParam param;

#if 0
    //FIXME: array index is out of bound
    buff[len] = 0x0;  //chomp!! replace \r\n with null string
    len++;
#endif

    memset(&param, 0, sizeof(stParam));
    if( (1==len) && (buff[0]=='\r' || buff[0]=='\n')){
        nRet = AT_OK;
        goto exit;
    }
    
    if (0 == len) {
        atcmd_printf("\r\n%s\r\n", atcmd_err_tbl[AT_PARAM_ERROR]);
        return AT_PARAM_ERROR;
    }

    for(i = 0; i < MAX_CMD_LEN; i++)
    {
        if(buff[i] == '\0' || buff[i] == '=' || buff[i] == ' ')
        {
            memcpy(cmd, buff, i);
            operat = buff[i];
            cmd[i] = '\0';
            break;
        }
    }

    if (cmd[i-1] == '?') {
        help = 1;
	cmd[i-1] = '\0';
    }

    for(i = 0; i < sizeof(atcmd_info_tbl)/sizeof(at_cmd_info); i++)
    {
#if 0
        atcmd_printf("atCmd = %s\r\n", atcmd_info_tbl[i].atCmd);
        atcmd_printf("buff=%s\r\n",buff);
        atcmd_printf("cmd=%s\r\n",cmd);
        atcmd_printf("strlen=%d\r\n",strlen(atcmd_info_tbl[i].atCmd));
#endif

        //if(strncasecmp(atcmd_info_tbl[i].atCmd, cmd, strlen(atcmd_info_tbl[i].atCmd)) == 0)    
        if(strcasecmp(atcmd_info_tbl[i].atCmd, cmd) == 0)
        {
            if(operat != 0)
                parseBuff2Param(buff + strlen(atcmd_info_tbl[i].atCmd) + 1, &param, atcmd_info_tbl[i].maxargu);

            if (help) {
                if (i == 0) {//Attention AT Command
                    atcmd_printf("\r\nAT+<CMD>?: help on <CMD>\r\nAT+<CMD>: run <CMD>\r\nAT+<CMD>=<value>: set the value\r\nAT+<CMD>=?: get the value\r\n");
                    //followed by the help of all commands:
                    At_CmdList(port, &param);
		} else {
                    atcmd_printf("%s: %s\r\n", atcmd_info_tbl[i].atCmd, atcmd_info_tbl[i].CmdUsage);
		}
		nRet = AT_OK;
            } else {
                nRet = atcmd_info_tbl[i].pfHandle(port, atcmd_info_tbl[i].atCmd, &param);
            }
            goto exit_rsp;
        }
    }

#ifndef RUI_BOOTLOADER
    for(j = 0; j < ATCMD_CUST_TABLE_SIZE ; j++)
    {
        if (atcmd_cust_tbl[j].atCmd != NULL) {
            if((strncasecmp("ATC+", cmd, 4) == 0) && (strcasecmp(atcmd_cust_tbl[j].atCmd, cmd+4) == 0))
            {
                uint8_t cust_atcmd_buff[CLI_BUFFER_SIZE+4];

                if(operat != 0)
                    parseBuff2Param(buff + 4 + strlen(atcmd_cust_tbl[j].atCmd) + 1, &param, atcmd_cust_tbl[j].maxargu);

                sprintf(cust_atcmd_buff, "%s%s", "ATC+", atcmd_cust_tbl[j].atCmd);

                if (help) {
                    atcmd_printf("%s: %s\r\n", cust_atcmd_buff, atcmd_cust_tbl[j].CmdUsage);
	            nRet = AT_OK;
                } else {
                    nRet = atcmd_cust_tbl[j].pfHandle(port, cust_atcmd_buff, &param);
                }
                goto exit_rsp;
            }
        }
    }
#endif

exit_rsp:
    if (nRet < sizeof(atcmd_err_tbl)/sizeof(char *)) {
        atcmd_printf("\r\n%s\r\n", atcmd_err_tbl[nRet]);
    } else {
        atcmd_printf("\r\n%s\r\n", atcmd_err_tbl[1]);
    }

    if (i == sizeof(atcmd_info_tbl)/sizeof(at_cmd_info)
#ifndef RUI_BOOTLOADER
		    && j == ATCMD_CUST_TABLE_SIZE
#endif
		    ) {
        atcmd_printf("\r\n%s: Command not found!!\r\n", cmd);
    }
exit:
    return nRet;
}

#ifndef RUI_BOOTLOADER
void StrToHex(uint8_t *pbDest, const char *pbSrc, int nLen)
{
    char h1,h2;
    char s1,s2;
    int i;

    for (i=0; i<nLen/2; i++)
    {
        h1 = pbSrc[2*i];
        h2 = pbSrc[2*i+1];

        s1 = toupper(h1) - 0x30;
        if (s1 > 9)
            s1 -= 7;

        s2 = toupper(h2) - 0x30;
        if (s2 > 9)
            s2 -= 7;
        pbDest[i] = s1*16 + s2;
    }

}

uint8_t at_check_hex_param(const char *p_str, uint32_t str_len, uint8_t *p_hex)
{
    uint32_t len = strlen(p_str);
    uint16_t i;

    /* Length verification */
    if ((len != str_len) || (len%2 != 0))
        return 1;

    /* Hex check */
    for (i=0; i<len; i++)   // hex string check
    {
        if (!isxdigit(p_str[i]))
            return 1;
    }

    /* String to hex */
    if (p_hex != NULL)
        StrToHex(p_hex, p_str, len);

    return 0;
}

uint8_t at_check_alphanumeric_param(const char *p_str, uint32_t str_len)
{
    uint32_t len = strlen(p_str);
    uint32_t i;

    /* Length verification */
    if (len != str_len)
        return 1;

    /* Hex check */
    for (i=0; i<len; i++)
    {
        if (!isalnum(p_str[i])) // check if character is alphanumeric
            return 1;
    }

    return 0;
}

uint8_t at_check_hex_uint16(const char *p_str, uint16_t *value)
{
    uint8_t val[2];

    if (0 != at_check_hex_param(p_str, 4, val))
        return 1;

    *value = val[0]<<8 | val[1];

    return 0;
}

uint8_t at_check_hex_uint32(const char *p_str, uint32_t *value)
{
    uint8_t val[4];

    if (0 != at_check_hex_param(p_str, 8, val))
        return 1;

    *value = val[0]<<24 | val[1]<<16 | val[2]<<8 | val[3];

    return 0;
}

uint8_t at_check_digital_uint32_t(const char *p_str, uint32_t *value)
{
#define MAXIMUM_NB_DIGITS 9
    uint32_t digit;
    uint32_t str_len = strlen(p_str);

    if (str_len > MAXIMUM_NB_DIGITS)
        return 1;

    if(strspn(p_str, "0123456789")!=strlen(p_str))
        return 1;
        
    digit = atoi(p_str);
    if (digit == 0)
    {
        if (str_len == 1)
        {
            if (value != NULL)
                *value = 0;
            return 0;
        }
        else
            return 1;
    }

    for (uint8_t i=0; i<MAXIMUM_NB_DIGITS; i++)
    {
        uint32_t tmp = digit/pow(10, i);
        if (tmp != 0)
        {
            continue;
        }
        else
        {
            if (str_len != i)
                return 1;
            break;
        }
    }

    if (value != NULL)
        *value = digit;
    return 0;
}
#endif
