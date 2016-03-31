//  ________   ________  _________  _______         ___  ________  ________  ___  __    ________  _______   ___      ___ 
// |\   ___  \|\   __  \|\___   ___\\  ___ \       |\  \|\   __  \|\   ____\|\  \|\  \ |\   ___ \|\  ___ \ |\  \    /  /|
// \ \  \\ \  \ \  \|\  \|___ \  \_\ \   __/|      \ \  \ \  \|\  \ \  \___|\ \  \/  /|\ \  \_|\ \ \   __/|\ \  \  /  / /
//  \ \  \\ \  \ \   __  \   \ \  \ \ \  \_|/__  __ \ \  \ \   __  \ \  \    \ \   ___  \ \  \ \\ \ \  \_|/_\ \  \/  / / 
//   \ \  \\ \  \ \  \ \  \   \ \  \ \ \  \_|\ \|\  \\_\  \ \  \ \  \ \  \____\ \  \\ \  \ \  \_\\ \ \  \_|\ \ \    / /  
//    \ \__\\ \__\ \__\ \__\   \ \__\ \ \_______\ \________\ \__\ \__\ \_______\ \__\\ \__\ \_______\ \_______\ \__/ /   
//     \|__| \|__|\|__|\|__|    \|__|  \|_______|\|________|\|__|\|__|\|_______|\|__| \|__|\|_______|\|_______|\|__|/    
//
// Random Servo Movement
// 
// Made by Nathan Jackson
// License: MIT

#include <Servo.h> 

Servo xservo; 
Servo yservo; 
Servo zservo;

int xpos; 
int ypos; 
int zpos;

void setup() { 
  
    xservo.attach(9); //Attach the signal pin to pin 9 
  yservo.attach(10); //Attach the signal pin to pin 10
  zservo.attach(11); //Attach the signal pin to pin 11
  
    Serial.begin(9600); // This displays the rotation position in the serial monitor
    Serial.print('\n');
    Serial.print('\n');
    Serial.print("Ardunio Servo Swing");
    Serial.print('\n');
    Serial.print('\n');
} 

void loop() { 
{ 
  xpos = random(180);  
  xservo.write(xpos);
  
    Serial.print("Servo 1: ");
    Serial.println(xpos); 
} 
{ 
  ypos = random(180);  
  yservo.write(ypos);
  
    Serial.print("Servo 2: ");
    Serial.println(ypos);
} 
{ 
  zpos = random(180); 
  zservo.write(zpos);
  
    Serial.print("Servo 3: ");
    Serial.println(zpos);
    Serial.print('\n');
  delay(1000); 
} 
} 
