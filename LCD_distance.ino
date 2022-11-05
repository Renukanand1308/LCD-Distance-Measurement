#include<LiquidCrystal.h>// Adding LCD Library

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);// LCD Pins Connected to Arduino
const int trig_pin=2;// Declaring TRIGGER Pin
const int echo_pin=3;// Declaring ECHO Pin
float distance,duration;// Declaring DISTANCE & DURATION Variables

void setup() {
lcd.begin(16,2); // Setting Up LCD Display 
lcd.setCursor(0,0); // Setting Cursor to Print
pinMode(trig_pin,OUTPUT); // Setting Up TRIGGER Pin
pinMode(echo_pin,INPUT); // Setting Up ECHO Pin
}


void loop() {
digitalWrite(trig_pin,HIGH);// Setting TRIGGER Pin HIGH to Send PING
delayMicroseconds(20);
digitalWrite(trig_pin,LOW);
delayMicroseconds(20);
duration = pulseIn(echo_pin, HIGH); // Setting ECHO Pin as HIGH
distance=duration*0.034/2; //Calculation to Calculate Distance
lcd.setCursor(0,0);  // Setting Up Cursor to Print
lcd.print("Distance"); // Printing DISTANCE as String
lcd.setCursor(0,1); // Setting Up Cursor to Print distance
lcd.print(distance); // Printing distance
lcd.print("cm"); //Printing centimetre as String
delay(100); // Delay of 100 Milliseconds
}

    
