#include <SoftwareSerial.h> //Not sure where to get this if you don't already have it.

SoftwareSerial IRSensor(A3, A3);

const int IRFlag = 0;


void setup() {

  IRSensor.begin(2400);
  pinMode(A0, INPUT); //Use these in set up. It's important

}

void loop() {
  int lightSensor_int;


  lightSensor_int = IRSensor.read();
  Serial.print(lightSensor_int);
  Serial.print("\n");


  if (lightSensor_int == 65)
  {
    digitalWrite(IRFlag, HIGH);
  }
  else
  {
    digitalWrite(IRFlag, LOW);
  }






}

