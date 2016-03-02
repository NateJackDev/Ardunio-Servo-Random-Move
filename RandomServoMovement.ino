//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Random Servo Movement
// 
// Made by Nathan Jackson
// License: MIT
// Downloaded from: https://123d.circuits.io/circuits/1692451-random-servo-movement

#include <Servo.h> 

Servo xservo; 
Servo yservo; 
Servo zservo;

int xpos; 
int ypos; 

void setup() { 
	
  	xservo.attach(9); 
	yservo.attach(10);
	zservo.attach(11);
} 

void loop() { 
	{ 
		ypos = random(180);  
		yservo.write(ypos); 
		delay(200); 
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
