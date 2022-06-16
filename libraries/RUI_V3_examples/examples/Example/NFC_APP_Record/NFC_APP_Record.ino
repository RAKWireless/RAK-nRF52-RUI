
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
  case RAK_NFC_T4T_EVENT_NDEF_READ:
  default:
    break;
  }
}
#endif

void setup()
{
  static const uint8_t windows_application_id[] =
      { '{', 'e', '1', '2', 'd', '2', 'd', 'a', '7', '-',
    '4', '8', '8', '5', '-', '4', '0', '0', 'f', '-',
    'b', 'c', 'd', '4', '-', '6', 'c', 'b', 'd', '5',
    'b', '8', 'c', 'f', '6', '2', 'c', '}'
  };
  static const uint8_t android_package_name[] =
      { 'c', 'o', 'm', '.', 'a', 'n', 'd', 'r', 'o', 'i', 'd', '.', 'v',
'e', 'n', 'd', 'i', 'n', 'g' };

  Serial.begin(115200);

#ifdef SUPPORT_NFC
  api.nfc.init(true, false, nfc_t4t_callback);	// NFC tag init
  api.nfc.send(APP, android_package_name, sizeof(android_package_name),
	       windows_application_id, sizeof(windows_application_id));
#endif
}

void loop()
{
  Serial.println("This is main loop");
  api.system.sleep.all(30000);
}
