#include "udrv_nfc.h"

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
  case RAK_NFC_T4T_EVENT_FIELD_ON:
    break;
  case RAK_NFC_T4T_EVENT_FIELD_OFF:
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_BLUE, LOW);
    break;
  case RAK_NFC_T4T_EVENT_NDEF_READ:
    digitalWrite(LED_GREEN, HIGH);	// light green LED when Read NFC tag
    Serial.println("NFC READ");
    break;
  case RAK_NFC_T4T_EVENT_NDEF_UPDATED:
    digitalWrite(LED_BLUE, HIGH);	// light blue LED when Write NFC tag
    break;
  default:
    break;
  }
}
#endif

void setup()
{
  delay(3000);
  Serial.println("Example Start");
  /*set LED pin to OUTPUT */
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  static const uint8_t language[] = { 'e', 'n' };	// the language of the NFC tag (2 Bytes)
  static const uint8_t payload[] = { 'N', 'F', 'C', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't' };	// the payload of NFC tag (MAX: 244 bytes)

  Serial.begin(115200);

#ifdef SUPPORT_NFC
  api.nfc.init(true, true, nfc_t4t_callback);	// NFC tag init

  api.nfc.send(TXT, language, sizeof(language), payload, sizeof(payload));	// Start to send NFC message
#endif
}

void loop()
{
  Serial.println("This is main loop");
  api.system.sleep.all(30000);
}
