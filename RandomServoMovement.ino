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

void setup() { 
	
  	xservo.attach(9); //Attach the signal pin to pin 9 
	yservo.attach(10); //Attach the signal pin to pin 10
	zservo.attach(11); //Attach the signal pin to pin 11
} 

void loop() { 
{ 
	ypos = random(180); // The degree in random number selection 
	yservo.write(ypos); 
	delay(200); //Delay on Servo change
} 
{ 
	xpos = random(180);  
	xservo.write(xpos); 
	delay(200); 
} 
{ 
	ypos = random(180); 
	zservo.write(ypos);  
	delay(200); 
} 
} 
