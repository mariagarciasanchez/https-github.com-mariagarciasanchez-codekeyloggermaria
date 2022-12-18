#include "DigiKeyboard.h"

void setup() {
  //This is a simple code we don´t need write here nothing.
  // we need to use this library instead keyboard.h because is an attinity 85 or digispark card.
}


void loop() {
  
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (run the words or phrases that you put).This text will execute in the powershell program or notes.
  DigiKeyboard.println("Hello National Collgue!");
   DigiKeyboard.println("My name is Maria Garcia");
  
  
  // sure the computer knows the keyboard could connect connected
  DigiKeyboard.delay(5000);
}
