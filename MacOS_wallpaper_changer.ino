#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("Terminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("curl https://www.kaspersky.com/content/en-global/images/repository/isc/2021/ransomware.jpg > /Users/Shared/wallpaper.png");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("osascript -e 'tell application \"Finder\" to set desktop picture to POSIX file \"/Users/Shared/wallpaper.png\"'");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);

  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
