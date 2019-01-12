#include "M4Stack.h"

void setup() {
  M4.begin();
}

void loop() {
    if(M4.BtnA.wasPressed()) {
   
    Serial.printf("wasPressed A \r\n");
  }

  if(M4.BtnA.wasReleased()) {

    Serial.printf("wasReleased A \r\n");
  }

  if(M4.BtnA.pressedFor(2000)) {
   
    Serial.printf("pressedFor 2s A \r\n");
  }

   M4.update();
}
