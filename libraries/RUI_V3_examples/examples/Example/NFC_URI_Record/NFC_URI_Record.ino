
#ifdef SUPPORT_NFC
/* The callback function for NFC
 *
 * NOTICE: Cannot use Serial.print() in the event of UPDATED,
 *         The tag still can be update ,but the cellphone will show: Update fail!
 */
static void nfc_t4t_callback(void *p_context, RAK_NFC_T4T_EVENT event,
			     const uint8_t * p_data, size_t data_length,
			     uint32_t flags)
{
    (void) p_context;
  
    switch (event) {
        case RAK_NFC_T4T_EVENT_FIELD_OFF:
            digitalWrite(LED_GREEN, LOW);
            break;
        case RAK_NFC_T4T_EVENT_NDEF_READ:
            digitalWrite(LED_GREEN, HIGH);	// light green LED when Read NFC tag
            Serial.println("NFC Read");
            break;
        default:
            break;
    }
}
#endif

void setup()
{
    /*set LED pin to OUTPUT */
    pinMode(LED_GREEN, OUTPUT);

    static const uint8_t url[] =
    { 'r', 'a', 'k', 'w', 'i', 'r', 'e', 'l', 'e', 's', 's', '.', 'c',
'o', 'm' };

    Serial.begin(115200);

#ifdef SUPPORT_NFC
    api.nfc.init(false, false, nfc_t4t_callback);	// NFC tag init
    api.nfc.send(URI, RAK_NFC_URI_HTTPS_WWW, url, sizeof(url));
#endif
}

void loop()
{
    Serial.println("This is main loop");
    delay(30000);
}
