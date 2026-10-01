#include "Trafficlight.h"
#include "Pushbutton.h"
#include "buzzer.h"
#include "Pedestrianlight.h"

TrafficLight  carLight(PA4, PA1, PA0);   // red, yellow, green
Pedestrianlight pedLight(PB3, PB10);      // red, green
Buzzer buzz(D2);
PushButton crossButton(D4);

bool pedestrianRequested = false;

void PedestrianCrossing(){ 
    carLight.showYellow();
    pedLight.showRed();
    delay(500);
    
    carLight.showRed();
    pedLight.showGreen();
    buzz.Buzzeron(); 
    delay(4000);
    
    buzz.Buzzeroff();
    pedLight.showRed();
    delay(500);
}

void normalTraffic(){
    carLight.showYellow();
    delay(600);
    carLight.showGreen();
    delay(2000);
    carLight.showYellow();
    delay(600);
    carLight.showRed();
    delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  carLight.begin();
  pedLight.begin();
  crossButton.begin();

  carLight.showGreen();
  pedLight.showRed();
  Serial.begin(9600);
  Serial.println("System ready");
}

void loop() {
  // Check for a pedestrian request continuously during normal operation
  if (crossButton.isPressed() && !pedestrianRequested){
    pedestrianRequested = true;
    Serial.println("Pedestrian requested - wait for green light");
  }

  if (pedestrianRequested){
    PedestrianCrossing();
    pedestrianRequested = false;
    // Resume normal traffic light operation after crossing
    normalTraffic();
  } 
  else {
    // Normal traffic light cycle
    normalTraffic();
  }
}
 // this speeds up the simulation




