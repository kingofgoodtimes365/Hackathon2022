#include "Seeed_barosensor.h"
#include <Wire.h>

BME2 barosensor;

void setup()
{
  Serial.begin(9600);
  if(!barosensor.init()){
    Serial.println("Device error!");
  }
}
void loop() {
  float pressure;
  pressure = barosensor.getPressure()
  if(pressure < minpressure)
  {
    //call standard operating procedure code
       }

}
