void setup() {
    //P0, P1, and P4 are capable of hardware PWM (analogWrite).
    //0 is P0, 1 is P1, 4 is P4 - unlike the analog inputs, 
    pinMode(0, OUTPUT); 
    //for analog (PWM) outputs the pin number matches the port number.
}

void loop() {
    //sensorValue = analogRead(1); //Read P2
    analogWrite(0,analogRead(1)); 
    //delay(1000);
}
