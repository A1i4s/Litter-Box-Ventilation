/**
* Turns on fan
**/
#include <Arduino.h>
#include "sensirion_common.h"
#include "sgp30.h"

void setup() {
  Serial.begin(9600);
  //pinMode(4, OUTPUT); //LED
  pinMode(8, OUTPUT); //connector D7, auto turns on fan
  pinMode (6, INPUT); //Button
  
  
}   

void loop() {
  //digitalWrite(4,HIGH); //turns on fan
  //turn off fan on button press
  if (digitalRead(6) == 0 ){
    Serial.write("OFF\n");
    digitalWrite(8, 0);
  } else {
    Serial.write("ON\n");
    digitalWrite(8, 1);
    
  }
}

