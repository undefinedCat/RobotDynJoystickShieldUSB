#include "Joystick.h"

#define joystickX A0
#define joystickY A1
#define joystickClick 2
#define up 3
#define right 4
#define down 5
#define left 6
#define select 7
#define start 8

void setup() {
  pinMode(joystickClick,OUTPUT);
  pinMode(up,OUTPUT);
  pinMode(down,OUTPUT);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
  pinMode(select,OUTPUT);
  pinMode(start,OUTPUT);
  Joystick.begin(true);
  }
void loop() {
  Joystick.setXAxis(map(analogRead(joystickX),0,1023,-127,127)); // joystick X
  Joystick.setYAxis(map(analogRead(joystickY),0,1023,-127,127)); // joystick Y
  Joystick.setButton(0,digitalRead(joystickClick)); // joystick click
  Joystick.setButton(1,digitalRead(up)); // up button
  Joystick.setButton(2,digitalRead(right)); // right button
  Joystick.setButton(3,digitalRead(down)); // down button
  Joystick.setButton(4,digitalRead(left)); // left button
  Joystick.setButton(5,digitalRead(select)); // select button
  Joystick.setButton(6,digitalRead(start)); // start button
  }
