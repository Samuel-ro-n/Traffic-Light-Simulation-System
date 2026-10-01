#include "Pushbutton.h"

PushButton::PushButton(int PedButton) {
  this->PedButton = D4;
}

void PushButton::begin(){
  pinMode(PedButton, INPUT_PULLUP);
}

bool PushButton::isPressed() {
  return digitalRead(PedButton) == LOW;
}

