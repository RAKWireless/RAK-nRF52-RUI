
String command; //String to store BG96 commnads

//Write commnads to BG96
void bg96_write(const char *command) {
  while(*command)
  {
    Serial1.write(*command);
    command++;
  }
  delay(1000);
}

/* Fill your "AmazonRootCA1.pem" wiht LINE ENDING */
char* pem_CA= \
"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n";

/* Fill your "certificate.pem" wiht LINE ENDING */
char* pem_cert= \
"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUUbHuAt0ylV96HctAKuUSYw7X0c0wDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMDcwNTA0NTkz\n\
MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANGp30dp4JtLEGjJfXUR\n\
o52h50O1Mx0F/fVMlG1CMQwadMunIUPfNKuwvrWHci1+kvzyXrcQCSfR9phF0QcH\n\
CuMPbLrVNsvWbXZDUZGdnPGOwFTcgiiVXaMO1BJlM1eisu+z68KbiddvB7yg+rkj\n\
gwVRGGBpitUML632ZtOW/ExMVWZhxC4or8fLM0Auxfz9YM4ZThZRBjLHRAZ7avMs\n\
V/mZ8jhleD2aaHIlG+SCNL2YpIqkdv4FlZpHAJhqKkirAI1Zr/w7teOw6wste59K\n\
SxS6abNc3qqzXUmMUuC0f3Q8tO3o7PQ5Rwh8gGHLWNJXOYWVFiAlxIViPXxYjDwr\n\
Vu8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUKAq2kxJ+LlcrffBNQtJxzYL1MoMwHQYD\n\
VR0OBBYEFFq9xmkPkaKuI9rAU3PcWSDNKl40MAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAVYGhcm7WFDBuoXUGl9OpqL9AT\n\
jDjruv9RkQt4y2mDHHuPQDvTW3dv+ppokWYAMWHjEhdMHaQh6cjax/wvSECYw/Iu\n\
zjJ2wj0F7n35cwkVKWoEHT/ZlZ9p68ELds1Qsgp9zXCY/QXdBfhhlX3L32Flutvx\n\
r1Wh1fQkpyRTYYX15YjPsTLecTaBzs7QJqMx9tTjkQkIRVwmOwbA5PsGW1Jm1kAe\n\
7yVCFoLqjkwMO/sn6omzsB1fN6suWeFqMAWVA6diZioPZUEfC1VIDCE/pB56DpAH\n\
KfwivJZzTUC7sbZJTMctN7K2CuLaf/tyMn/Xmf4PbW6v5SyEDf9p1zy5Uvxo\n\
-----END CERTIFICATE-----\n";


/* Fill your "private.pem" wiht LINE ENDING */
char* pem_pkey= \
"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpAIBAAKCAQEA0anfR2ngm0sQaMl9dRGjnaHnQ7UzHQX99UyUbUIxDBp0y6ch\n\
Q980q7C+tYdyLX6S/PJetxAJJ9H2mEXRBwcK4w9sutU2y9ZtdkNRkZ2c8Y7AVNyC\n\
KJVdow7UEmUzV6Ky77PrwpuJ128HvKD6uSODBVEYYGmK1QwvrfZm05b8TExVZmHE\n\
Liivx8szQC7F/P1gzhlOFlEGMsdEBntq8yxX+ZnyOGV4PZpociUb5II0vZikiqR2\n\
/gWVmkcAmGoqSKsAjVmv/Du147DrCy17n0pLFLpps1zeqrNdSYxS4LR/dDy07ejs\n\
9DlHCHyAYctY0lc5hZUWICXEhWI9fFiMPCtW7wIDAQABAoIBAQCJ5zOnIyrKuerH\n\
IZBVSg7WBcG5NRuzgVdy2rXdz2W3Ukd0FC+7FrrsGsq1V6tv5QsFON23huKewGlz\n\
6qf7+VPd2S1pDgiGtjk1Sj4CiyrJb11t88Pgsa3vLDetCcdlYuxS4YK2c9uMSclK\n\
9o8y6vqoqphgAcuBKgzKXYFwtqSoAXR0qeMWN0++CX9z1CNo3J6plurgnBGnVD5l\n\
pq9nzZR8MtM+N7VL6DEg442sAPzwiFUpHotok3SdYzzdqEHncDHN5Z/WRUultQ5u\n\
F800vGPqGRMySYIv9JGtXreL+r/R/6y3e5bBvD98m0Pkv2SfAuDAbxpVHRee+pxC\n\
ojL8EWAxAoGBAOtBnyI1tzWNVHLTDBrSE26w0L4X+q4vpfu+gnHhy/SapyLRy9ZF\n\
DoFCaaAAv0zWssdaL+Ofd6IGYtCopMtxUfJQc0DVv2FPaUZFUT4gG/vLfIylLws0\n\
hs+7DYi2uVeMYM/TuH0Hqm9t9hkwLpYE2QXP7pAXwcemsVyOCZIsak99AoGBAOQm\n\
jUF8wimzksk7T5g3ff4AskJjL2g6lmv8cp42ZLjI48a8Wfib7WCO53/V8ZRhfe+d\n\
Zjx0HogXZu94lWAUCtVnDraJMclUvevCUcMnQLFJPFv14orYNULw+I3tlMuKUC9q\n\
B35M0hw3S1UUijxJD0QFkIJ32rN0E0o1GMsDLGPbAoGBAI1Pn4znAyOxvxYx20WJ\n\
Bo8oulpVAQj8KhGrf6N0ZBSLiPWLW4tbc7kE8XlguYgoNr80Vyu9MBktCNIZWtOx\n\
P+3zkSdSvWBwWOYS4RgWJXj749Z/qmBqrse8rgZ+65nBAq4TmO/RWPkR7g93N6R5\n\
SPsKyVvYSVfpswPLdchN0ZXpAoGARopg7FmNkuUxwkQzVOX7b5h5hSszki9jKNox\n\
+hbpR3TdcCn2S3ayi0ND8nOMsQr/rCFnZdOlSQCrU+ldjgpEWzz1AJ0kppIr8oPv\n\
Ub6GMwpoviolNDarKRpmT0Og2NnX9wD6diN8Zzr1cMXcA823CZoK1zwFg6yk9jG6\n\
i7JcfDcCgYBtM69STtd6oGJZgGuCwQop63uIdayiEn1llJCzhHDx5qyNzi9Hp5M7\n\
8da7phl7oIK0KXejwH0fci+alio9ZvopwiQiteRvVQUwWewD6RcaAUg5it/TA1LV\n\
v0c05Ee8uMP5HfOBVpY0e9zSpBkDBWr5t99xRnXij77iEFMULY5+DA==\n\
-----END RSA PRIVATE KEY-----\n";

void setup()
{
  Serial.begin(115200);
  delay(5000);
  Serial.println("RAKwireless RAK5010 MQTT with SSL Example");
  Serial.println("------------------------------------------------------");

  command = "ATE1\r";
  bg96_write(command.c_str());

  command = "at&f0\r";
  bg96_write(command.c_str());

  Serial.println("Enable extended time zone and local time:");
  command = "AT+CTZR=2\r";
  bg96_write(command.c_str());
  command = "AT+CTZR?\r";  //Get the local time
  bg96_write(command.c_str());
 
  // Deactivate a PDP Context 
  command = "AT+QIDEACT=1\r";
  bg96_write(command.c_str());
  delay(3000);

  Serial.println("Registration the indicate registration status:");
  command = "AT+CREG=1\r";
  bg96_write(command.c_str());
  command = "AT+CPIN?\r";  //Waiting for (U)SIM PIN to be given
  bg96_write(command.c_str());
   
  Serial.println("Setup the Operators setting during 30~60sec after APN is ready:");
  command = "AT+COPS=1,0,\"Far EasTone\",9\r";
  bg96_write(command.c_str());
  delay(500);
  Serial.println("Setup the Operators setting during 20sec after APN is ready:");
  delay(20000);
  command = "AT+COPS?\r";
  bg96_write(command.c_str());
  
  Serial.println("Query the Network Registration Status:");
  command = "AT+CREG?\r";
  bg96_write(command.c_str());
     
  Serial.println("Configure APN:");
  //command = "AT+QICSGP=1,1,\"nbiot\",\"\",\"\",1\r";
  command = "AT+QICSGP=1,1,\"FET Internet\",\"\",\"\",1\r";
  bg96_write(command.c_str());
  delay(1000);

  // Activate a PDP Context
  command = "AT+QIACT=1\r";
  bg96_write(command.c_str());
  delay(1000);

  // Configure Address of DNS Server
  command = "AT+QIDNSCFG=1,\"8.8.8.8\",\"8.8.8.4\"\r";
  bg96_write(command.c_str());

  command = "AT+CTZR?\r";  //Get the local time
  bg96_write(command.c_str());

  command = "AT+QNWINFO\r";
  bg96_write(command.c_str());

  command = "AT+QPING=1,\"8.8.8.8\"\r";
  bg96_write(command.c_str());

  Serial.println("Use SSL TCP secure connection for MQTT:");
  command = "AT+QMTCFG=\"ssl\",0,1,2\r";
  bg96_write(command.c_str());

  Serial.println("Upload CA Certificate to UFS:");
  command = "AT+QFDEL=\"cacert.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QFUPL=\"cacert.pem\",1187,100\r";
  bg96_write(command.c_str());
  bg96_write(pem_CA);
  delay(20000);

  Serial.println("Upload Client Certificate to UFS:");
  command = "AT+QFDEL=\"client.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QFUPL=\"client.pem\",1220,100\r";
  bg96_write(command.c_str());
  bg96_write(pem_cert);
  delay(20000);

  Serial.println("Upload Client Private Key to UFS:");
  command = "AT+QFDEL=\"user_key.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QFUPL=\"user_key.pem\",1679,100\r";
  bg96_write(command.c_str());
  bg96_write(pem_pkey);
  delay(20000);

  Serial.println("Configure the path of CA certificate for SSL context 2:");
  command = "AT+QSSLCFG=\"cacert\",2,\"cacert.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"cacert\",2\r";
  bg96_write(command.c_str());
    
  Serial.println("Configure the path of client certificate for SSL context 2");
  command = "AT+QSSLCFG=\"clientcert\",2,\"client.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"clientcert\",2\r";
  bg96_write(command.c_str());
         
  Serial.println("Configure the path of client private key for SSL context 2:");
  command = "AT+QSSLCFG=\"clientkey\",2,\"user_key.pem\"\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"clientkey\",2\r";
  bg96_write(command.c_str());

  Serial.println("Enable SSL authentication mode:");
  command = "AT+QSSLCFG=\"seclevel\",2,2\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"seclevel\",2\r";
  bg96_write(command.c_str());

  Serial.println("SSL authentication version:");
  command = "AT+QSSLCFG=\"sslversion\",2,4\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"sslversion\",2\r";
  bg96_write(command.c_str());

  Serial.println("Cipher suite:");
  command = "AT+QSSLCFG=\"ciphersuite\",2,\"0XFFFF\"\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"ciphersuite\",2\r";
  bg96_write(command.c_str());

  Serial.println("Ignore the time of authentication:");
  command = "AT+QSSLCFG=\"ignorelocaltime\",2,1\r";
  bg96_write(command.c_str());
  command = "AT+QSSLCFG=\"ignorelocaltime\",2\r";
  bg96_write(command.c_str());

  Serial.println("List Files Information:");
  command = "AT+QFLST\r";
  bg96_write(command.c_str());
    
  Serial.println("Start MQTT SSL connection:");
  command = "AT+QMTOPEN=0,\"ach7fkebnh9qw-ats.iot.ap-southeast-1.amazonaws.com\",8883\r";
  bg96_write(command.c_str());
  command = "AT+QMTOPEN?\r";
  bg96_write(command.c_str());
  delay(10000);  

  Serial.println("Connect to MQTT server:");
  command = "AT+QMTCONN=0,\"rak5010\"\r";
  bg96_write(command.c_str());
  delay(20000);
  command = "AT+QMTCONN?\r";
  bg96_write(command.c_str());
  delay(20000);

  Serial.println("MQTT & Subscribe to topic messages:");
  command = "AT+QMTSUB=0,1,\"$aws/things/rak5010/shadow/update/accepted\",1\r";
  bg96_write(command.c_str());
  delay(10000);

  Serial.println("MQTT & Subscribe to topic messages again:");
  command = "AT+QMTSUB=0,1,\"$aws/things/rak5010/shadow/update\",1\r";
  bg96_write(command.c_str());
  delay(10000); 
}

void loop()
{
  Serial.println("MQTT & Publish messages:");
  command = "AT+QMTPUB=0,1,1,0,\"$aws/things/rak5010/shadow/update/accepted\"\r";
  bg96_write(command.c_str());
  command = "Hello RAKwireless!!\r\032";
  bg96_write(command.c_str());
  delay(10000);  
 
  command = "AT+QMTPUB=0,1,1,0,\"$aws/things/rak5010/shadow/update\"\r";
  bg96_write(command.c_str());
  command = "Update Status...\r\032";
  bg96_write(command.c_str());
  delay(10000); 
}