// the setup routine runs once when you press reset:
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
    digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);
  }
  digitalWrite(1, LOW); // turn the LED off by making the voltage LOW
  Serial.println(digitalRead(2));
}
