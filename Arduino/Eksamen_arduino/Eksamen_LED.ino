#include <NewPing.h> // Imports the NewPing Library.
int ledPin1 = (2);
int ledPin2 = (3);
int ledPin3 = (4);
int ledPin4 = (5);
int ledPin5 = (6);
int trigPin = (10); // Add the Trig pin on pin 10.
int echoPin = (9); // Add the ECHO pin on pin 9.
int duration, distance; // Add types 'duration' and 'distance'.


void setup()
{
Serial.begin(9600);
pinMode (ledPin1, OUTPUT); // The LED must be controlled by Arduino, it means it is an output type.
pinMode (ledPin2, OUTPUT);
pinMode (ledPin3, OUTPUT);
pinMode (ledPin4, OUTPUT);
pinMode (ledPin5, OUTPUT);
pinMode (trigPin, OUTPUT);// Same as above, the TRIG pin will send the ultrasonic wave.
pinMode (echoPin, INPUT); // The ECHO pin will recieve the rebounded wave, so it must be an input type.
}


void loop()
{
digitalWrite (ledPin1, LOW); // Here, LOW means off and HIGH means on.
digitalWrite (trig Pin, HIGH);
//delay(5);
digitalWrite (trigPin, LOW);
duration=pulseIn(echoPin,HIGH);
distance=abs((duration/2)/29.1);

Serial.print("cm");
Serial.println(distance);


if ((distance >=0) && (distance <=7)){
digitalWrite (ledPin1, HIGH);
digitalWrite (ledPin2, LOW);
digitalWrite (ledPin3, LOW);
digitalWrite (ledPin4, LOW);
digitalWrite (ledPin5, LOW);
delay(5);
}

if ((distance >=8) && (distance <=15)){
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, HIGH);
digitalWrite (ledPin3, LOW);
digitalWrite (ledPin4, LOW);
digitalWrite (ledPin5, LOW);
delay(5);
}

if ((distance >=16) && (distance <=23)){
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, LOW);
digitalWrite (ledPin3, HIGH);
digitalWrite (ledPin4, LOW);
digitalWrite (ledPin5, LOW);
delay(5);
}

if ((distance >=24) && (distance <=31)){
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, LOW);
digitalWrite (ledPin3, LOW);
digitalWrite (ledPin4, HIGH);
digitalWrite (ledPin5, LOW);
delay(5);
}

if ((distance >=32) && (distance <=39)){
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, LOW);
digitalWrite (ledPin3, LOW);
digitalWrite (ledPin4, LOW);
digitalWrite (ledPin5, HIGH);
delay(5);
}

if ((distance <=1) && (distance >=40)){
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, LOW);
digitalWrite (ledPin3, LOW);
digitalWrite (ledPin4, LOW);
digitalWrite (ledPin5, LOW);
delay(5);
}


}
