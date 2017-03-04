void setup() {
    //P0, P1, and P4 are capable of hardware PWM (analogWrite).
    //0 is P0, 1 is P1, 4 is P4 - unlike the analog inputs, 
    pinMode(1, OUTPUT); 
    //for analog (PWM) outputs the pin number matches the port number.
}

void loop() {
    for (int i=0; i<256; i++){ // loop that slowly makes the led power on.
    analogWrite(1,i); 
    delay(10);
      }
    delay(1000);
    for (int i=255; i>0; i--){ // loop that slowly makes the led power off.
    analogWrite(1,i); 
    delay(10);
      }
    delay(1000);
}
