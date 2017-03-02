// the setup routine runs once when you press reset:
// Dit gebruikt de hello button layout.
#include "DigiKeyboard.h"
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED op dit model!   
  pinMode(2, INPUT);  // Input for button
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(0, HIGH); // powah to the button
  if (digitalRead(2)){
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(100);
    DigiKeyboard.print("https://www.youtube.com/watch?v=ZZ5LpwO-An4");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);

  }
  
  Serial.println(digitalRead(2));
}
