// P0, P1, and P4 are capable of hardware PWM (analogWrite).
// P0 is the LED on this model; has PWM.

// code incoherently written at the early hours, peek at own risk.

  // vars
  int button = 5;
  // rgb pins
  int pins[] = {0,1,4}; // BGR
  // main counter/index: n #always
  int n = 0;
  
void setup() {    
  // setup
  pinMode(pins[0], OUTPUT);
  pinMode(pins[1], OUTPUT);
  pinMode(pins[2], OUTPUT);  
  pinMode(button, INPUT);  // Input for button
}

void loop() {
  while (!digitalRead(button)){/*idle behaviour*/}
  fadeout(n++);
  fadein(n<3?n:n=0);
  delay(40);
  for(int i = 200; i>0; i--){
      if (digitalRead(button)) {
          delay(40);
          while (!digitalRead(button)){
              fadeout(n++);
              fadein(n<3?n:n=0);
            }
          n = 0;
        }
    }
}

void fadein(int p){
      for (int i=0; i<256; i++){ // loop that slowly makes the led power on.
        analogWrite(pins[p],i); 
        delay(10);
      }
  }
void fadeout(int p){
      for (int i=255; i>0; i--){ // loop that slowly makes the led power off.
        analogWrite(pins[p],i); 
        delay(10);
      }
  }
