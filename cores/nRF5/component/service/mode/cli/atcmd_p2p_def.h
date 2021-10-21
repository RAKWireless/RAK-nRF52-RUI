/**
 *
 * @page ATCMD AT Command Manual
 *
 * @section ATCMD_p2p LoRaWAN P2P
 * 
 * This section provides a set of commands for battery level, RF signal quality and FW version.
 *
 * @subsection ATCMD_p2p_1 AT+NWM: network working mode
 *
 * This command switchs between LoRaWAN P2P mode and LoRaWAN mode (0:LoRaWAN P2P, 1:LoRaWAN, 2: LoRaWAN P2P FSK)
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+NWM?            | --                 | AT+NWM: get or set the network working mode (0 = P2P_LORA, 1 = LoRaWAN, 2 = P2P_FSK)                         | OK                 |
 * | AT+NWM=?           | --                 | 0 or 1 or 2                                                       | OK                 |
 * | AT+NWM=\<Param\>   | 0 or 1             | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+NWM= | 1                  | --                                                                | OK                 |
 * | Example<br>AT+NWM=?|                    | 1                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_2 AT+PFREQ: frequency
 *
 * This command allows the user to access the frequency in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PFREQ?          | --                 | AT+PFREQ: access the frequency in p2p mode                        | OK                 |
 * | AT+PFREQ=?         | --                 | <interger>                                                        | OK                 |
 * | AT+PFREQ=\<Param\> | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PFREQ=?| --               | 868000000                                                         | OK                 |
 *
 * @subsection ATCMD_p2p_3 AT+PSF: spreading factor
 *
 * This command allows the user to access the spreading factor in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PSF?            | --                 | AT+PSF: access the spreading factor in p2p mode                   | OK                 |
 * | AT+PSF=?           | --                 | <interger>                                                        | OK                 |
 * | AT+PSF=\<Param\>   | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PSF=?| --                 | 7                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_4 AT+PBW: bandwidth
 *
 * This command allows the user to access the bandwidh in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PBW?            | --                 | AT+PBW: access the bandwidh in p2p mode                           | OK                 |
 * | AT+PBW=?           | --                 | <interger>                                                        | OK                 |
 * | AT+PBW=\<Param\>   | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PSF=?| --                 | 0                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_5 AT+PCR: codingrate
 *
 * This command allows the user to access the codingrate in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PCR?            | --                 | AT+PCR: access the codingrate in p2p mode                         | OK                 |
 * | AT+PCR=?           | --                 | <interger>                                                        | OK                 |
 * | AT+PCR=\<Param\>   | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PCR=?| --                 | 1                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_6 AT+PPL: the length of preamble
 *
 * This command allows the user to access the length of preamble in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PPL?            | --                 | AT+PPL: access the length of preamble in p2p mode                 | OK                 |
 * | AT+PPL=?           | --                 | <interger>                                                        | OK                 |
 * | AT+PPL=\<Param\>   | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PPL=?| --                 | 8                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_7 AT+PTP: tx power
 *
 * This command allows the user to access the tx power in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PTP?            | --                 | AT+PTP: access the tx power in p2p mode                           | OK                 |
 * | AT+PTP=?           | --                 | <interger>                                                        | OK                 |
 * | AT+PTP=\<Param\>   | <interger>         | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PTP=?| --                 | 14                                                                | OK                 |
 *
 * @subsection ATCMD_p2p_8 AT+PSEND: send data
 *
 * This command allows the user to send data in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PSEND?          | --                 | AT+PSEND: send data in p2p mode.                                  | OK                 |
 * | AT+PSEND=?         | --                 | <interger>                                                        | OK                 |
 * | Example<br>AT+PSEND=?| --               | 32                                                                | OK                 |
 *
 * @subsection ATCMD_p2p_9 AT+PRECV: receive data
 *
 * This command allows the user to receive data in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PRECV?          | --                 | AT+PRECV: receive data in p2p mode                                | OK                 |
 * | AT+PRECV=?         | --                 | <interger>                                                        | OK                 |
 * | Example<br>AT+PRECV=?| --               | 5000                                                              | OK                 |
 *
 * @subsection ATCMD_p2p_10 AT+PCRYPT: the crypt status
 *
 * This command allows the user to access the crypt status in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PCRYPT?         | --                 | AT+PCRYPT: access the crypt status in p2p mode                    | OK                 |
 * | AT+PCRYPT=?        | --                 | \<bool\>                                                          | OK                 |
 * | Example<br>AT+PKEY=?| --                | 1                                                                 | OK                 |
 *
 * @subsection ATCMD_p2p_11 AT+PKEY: the encryption and decryption key
 *
 * This command allows the user to access the encryption and decryption key in p2p mode.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PKEY?           | --                 | AT+PKEY: access the encryption and decryption key in p2p mode     | OK                 |
 * | AT+PKEY=?          | --                 | \<8 hex\>                                                         | OK                 |
 * | Example<br>AT+PKEY=?| --                | 0011223344556677                                                  | OK                 |
 *
 * @subsection ATCMD_p2p_12 AT+PFDEV: get or set the P2P FSK modem frequency deviation
 *
 * This command allows the user to get or set the P2P FSK modem frequency deviation.
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PFDEV?          | --                 | AT+PFDEV: get or set the P2P FSK modem frequency deviation        | OK                 |
 * | AT+PFDEV=?         | --                 | <frequency deviation>                                             | OK                 |
 * | AT+PFDEV=\<Param\> | <frequency deviation> | --                                                             | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PFDEV=?| --               | 5000                                                              | OK                 |
 *
 * @subsection ATCMD_p2p_13 AT+PBR: get or set the P2P FSK modem bitrate (600b/s-307200b/s)
 *
 * This command allows the user to get or set the P2P FSK modem bitrate (600b/s-307200b/s)
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+PBR?            | --                 | AT+PBR: get or set the P2P FSK modem bitrate (600b/s-307200b/s)   | OK                 |
 * | AT+PBR=?           | --                 | <fbitrate>                                                        | OK                 |
 * | AT+PBR=\<Param\>   | <bitrate>          | --                                                                | OK / AT_PARAM_ERROR|
 * | Example<br>AT+PBR=?| --                 | 4915                                                              | OK                 |
 *
 */


#ifndef _ATCMD_P2P_DEF_H_
#define _ATCMD_P2P_DEF_H_

//### following AT CMD, has doc ###
#define ATCMD_NWM             "AT+NWM"
#define ATCMD_PFREQ           "AT+PFREQ"
#define ATCMD_PSF             "AT+PSF"
#define ATCMD_PBW             "AT+PBW"
#define ATCMD_PCR             "AT+PCR"
#define ATCMD_PPL             "AT+PPL"
#define ATCMD_PTP             "AT+PTP"
#define ATCMD_PSEND           "AT+PSEND"
#define ATCMD_PRECV           "AT+PRECV"
#define ATCMD_PCRYPT          "AT+ENCRY"
#define ATCMD_PKEY            "AT+ENCKEY"
#define ATCMD_P2P             "AT+P2P"
#define ATCMD_PBR             "AT+PBR"
#define ATCMD_PFDEV           "AT+PFDEV"             


#endif //_ATCMD_INFO_DEF_H_
