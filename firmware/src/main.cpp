#include <Arduino.h>
#include <ESP32Servo.h> 

Servo FRfoot; //Front right foot
Servo FRknee; //Front right knee 
Servo FRhip; //Front right hip
Servo FLfoot;
Servo FLknee;
Servo FLhip;

int FRfootPin = 17; 
int FRkneePin = 18;
int FRhipPin = 19;
int FLfootPin = 16;
int FLkneePin = 4;
int FLhipPin = 2;

void neutral(){
  FRfoot.write(180);
  FRknee.write(0);
  FRhip.write(180);

  FLfoot.write(0);
  FLknee.write(180);
  FRhip.write(0);
}

void setup() {
  FRfoot.attach(FRfootPin); //180 default (max) 10 (min)
  FRknee.attach(FRkneePin); //0 default (min) 150 (max)
  FRhip.attach(FRhipPin); //180 default (max) 30 (min)

  FLhip.attach(FLhipPin);
  FLknee.attach(FLkneePin);
  FLfoot.attach(FLfootPin);
  neutral();
}

void loop() {
  //FLhip.write(90);
  //FLfoot.write(90);
  FLknee.write(90);
  delay(1000);
  //FLfoot.write(0);
  FLknee.write(180);
  //FLhip.write(0);
  delay(1000);
}