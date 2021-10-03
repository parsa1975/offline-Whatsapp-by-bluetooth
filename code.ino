#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2,3);
void setup(){
  bluetooth.begin(9600);
  Serial.begin(9600);
}
void loop(){
  if(bluetooth.available()){
    Serial.println(bluetooth.readStringUntil('\n'));
  }
  if(Serial.available()){
    bluetooth.println(Serial.readStringUntil('\n'));
  }
}
