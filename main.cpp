#include <Arduino.h>
#include <NewPing.h>  
#define TRIGGER_PIN 10
#define ECHO_PIN 13
#define MAX_DISTANCE 450

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

float distance; 


void setup() {
  Serial.begin (9600);
}

void loop() {

  distance = sonar.ping_cm();

 
  
  Serial.print("distance = ");
  if (distance >= 450 || distance <= 2) {
    Serial.println("out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
  }
  delay(500);
}




  

