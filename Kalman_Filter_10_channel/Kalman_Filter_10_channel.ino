//#include "Kalman.h"
#include "Kalman_modified.h" // kalman 1~10 channel modified by saipudin

int sensorPin = A7;    // select the input pin for the potentiometer

  double measurement, filteredMeasurement;
  //suggested initial values for high noise filtering
  // bisa sampai 10 channel
  Kalman1 myFilter1(0.1,45,1000,30); 
  Kalman2 myFilter2(0.125,50,1200,80);
  Kalman3 myFilter3(0.8,60,600,700);
  Kalman4 myFilter4(1,70,400,30);
  Kalman5 myFilter5(0.5,80,400,20);
  
void setup() {
  Serial.begin(115200);

}

void loop() {
  // read the value from the sensor:
  int abd = analogRead(sensorPin);
  int sensorValue1 = myFilter1.getFilteredValue1(abd);
  int sensorValue2 = myFilter2.getFilteredValue2(sensorValue1);
  int sensorValue3 = myFilter3.getFilteredValue3(sensorValue2);
  int sensorValue4 = myFilter4.getFilteredValue4(sensorValue3);
  int sensorValue5 = myFilter5.getFilteredValue5(sensorValue4);
  
  Serial.print(abd);          Serial.print("\t");
  Serial.print(sensorValue1); Serial.print("\t");
  Serial.print(sensorValue2); Serial.print("\t");
  //Serial.print(sensorValue3); Serial.print("\t");
  //Serial.print(sensorValue4); Serial.print("\t");
  //Serial.print(sensorValue5);
  Serial.print("\n");
  //float volt = sensorValue*(500.0 / 1023.0);
  delay(100);
}
