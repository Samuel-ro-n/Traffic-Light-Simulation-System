#include "Pedestrianlight.h"

Pedestrianlight::Pedestrianlight(int redPin, int greenPin) {
  this->Red = PB10;
  this->Green = PB3;
}

void Pedestrianlight::begin() {
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
}

void Pedestrianlight::allOff() {
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
}

void Pedestrianlight::showRed() {
  allOff();
  digitalWrite(Red, HIGH);
}

void Pedestrianlight::showGreen() {
  allOff();
  digitalWrite(Green, HIGH);
}