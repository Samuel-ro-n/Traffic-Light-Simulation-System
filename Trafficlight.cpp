#include "Trafficlight.h"

TrafficLight::TrafficLight(int Red, int Yellow, int Green) {
  this->Red = PA4;
  this->Yellow= PA1;
  this->Green = PA0;
}

void TrafficLight::begin() {
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
}

void TrafficLight::allOff(){
      digitalWrite(Red, LOW);
      digitalWrite(Yellow, LOW);
      digitalWrite(Green, LOW);
    }

void TrafficLight::showRed(){ 
  allOff(); 
  digitalWrite(Red, HIGH); 
  }

void TrafficLight::showYellow(){ 
  allOff(); 
  digitalWrite(Yellow, HIGH); 
  }

void TrafficLight::showGreen(){ 
  allOff(); 
  digitalWrite(Green, HIGH); 
  }



