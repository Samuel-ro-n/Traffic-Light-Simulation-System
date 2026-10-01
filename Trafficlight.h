#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H
#include <Arduino.h>

class TrafficLight {
  private:
    int Green;
    int Yellow;
    int Red;
  public:
    TrafficLight(int Red, int Yellow, int Green);
    void begin();
    void allOff();
    void showRed(); 
    void showYellow();
    void showGreen();
};
#endif