// the setup routine runs once when you press reset:
#include "DigiKeyboard.h"
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on the model I'm using
  pinMode(2, INPUT);  // Input for button
}

// the loop routine runs over and over again forever:
void loop() {
  // I was using pin 0 to power the button, you can just use the 5v out
  // digitalWrite(0, HIGH);
  if (digitalRead(2)){
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    // for windows
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    // wait for the run window to open
    delay(100);
    DigiKeyboard.print("https://www.youtube.com/watch?v=ZZ5LpwO-An4");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

  }
  
  Serial.println(digitalRead(2));
}
