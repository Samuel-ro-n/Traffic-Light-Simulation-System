#ifndef PUSH_BUTTON_H
#define PUSH_BUTTON_H
#include <Arduino.h>

class PushButton{
  private:
    int PedButton;
  public:
    PushButton(int pin);
    void begin();
    bool isPressed();
};
#endif