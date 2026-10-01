#include "buzzer.h"

Buzzer::Buzzer(int pin){
  this->Buzzer1 = D2;
  pinMode(Buzzer1, OUTPUT);
}
void Buzzer::Buzzeron(){
  tone(Buzzer1, 160); 
}
void Buzzer::Buzzeroff(){
  noTone(Buzzer1); 
}