#include <Arduino.h>

const int lamp1 = 5;  // Pin untuk lampu 1
const int lamp2 = 18; // Pin untuk lampu 2
const int lamp3 = 19; // Pin untuk lampu 3

void setup() {
  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(lamp3, OUTPUT);
}

void loop() {
  digitalWrite(lamp1, HIGH);//red
  delay(5000);
  digitalWrite(lamp1, LOW);
  
  digitalWrite(lamp3, HIGH);//green
  delay(3000);
  digitalWrite(lamp3, LOW);
  
  digitalWrite(lamp2, HIGH);//yellow
  delay(1000);
  digitalWrite(lamp2, LOW);
}
