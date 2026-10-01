#ifndef PEDESTRIAN_LIGHT_H
#define PEDESTRIAN_LIGHT_H
#include <Arduino.h>

class Pedestrianlight{
  private:
    int Green;
    int Red;
  public:
    Pedestrianlight(int redPin, int greenPin);
    void begin();
    void allOff();
    void showRed();    
    void showGreen();  
};
#endif