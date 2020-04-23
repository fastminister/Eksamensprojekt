#include <NewPing.h> // Imports the NewPing Library.
#include <FastLED.h> // Imports the FastLed Library

#define LED_PIN 7
#define NUM_LEDS  30
CRGB leds[NUM_LEDS];

int trigPin = (10); // Add the Trig pin on pin 10.
int echoPin = (9); // Add the ECHO pin on pin 9.
int duration, distance; // Add types 'duration' and 'distance'.

void setup()
{
Serial.begin(9600);

FastLED.addLeds<WS2813, LED_PIN, GRB>(leds, NUM_LEDS);

pinMode (trigPin, OUTPUT);// Same as above, the TRIG pin will send the ultrasonic wave.
pinMode (echoPin, INPUT); // The ECHO pin will recieve the rebounded wave, so it must be an input type.
}

void loop()
{


 
  
digitalWrite (trigPin, HIGH);
delay(5);
digitalWrite (trigPin, LOW);
duration=pulseIn(echoPin,HIGH);
distance=abs((duration/2)/29.1);

Serial.print("cm");
Serial.println(distance);

if ((distance >=0) && (distance <=6)){
  leds[1] = CRGB(255, 255, 255);
    FastLED.show();
  leds[29] = CRGB(255, 255, 255);
    FastLED.show();
  leds[2] = CRGB(255, 255, 255);
    FastLED.show();
  leds[28] = CRGB(255, 255, 255);
  delay(20);
  }
else{
  leds[1] = CRGB(0,0,0);
    FastLED.show();
  leds[29] = CRGB(0,0,0);
  leds[2] = CRGB(0, 0, 0);
    FastLED.show();
  leds[28] = CRGB(0, 0, 0);
    FastLED.show();

  }

//if ((distance >=4) && (distance <=6)){
  //leds[2] = CRGB(255, 255, 255);
   // FastLED.show();
 // leds[28] = CRGB(255, 255, 255);
 // //  FastLED.show();
 // delay(20);
 // }
//else{
//  leds[2] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[28] = CRGB(0, 0, 0);
//    FastLED.show();
//  }

if ((distance >=7) && (distance <=12)){
  leds[3] = CRGB(255, 255, 255);
    FastLED.show();
  leds[27] = CRGB(255, 255, 255);
    FastLED.show();
  leds[4] = CRGB(255, 255, 255);
    FastLED.show();
  leds[26] = CRGB(255, 255, 255);
    FastLED.show();
  delay(20);
  }
else{
  leds[3] = CRGB(0, 0, 0);
    FastLED.show();
  leds[27] = CRGB(0, 0, 0);
    FastLED.show();
  leds[4] = CRGB(0, 0, 0);
    FastLED.show();
  leds[26] = CRGB(0, 0, 0);
    FastLED.show();
  }

//if ((distance >=10) && (distance <=12)){
//  leds[4] = CRGB(255, 255, 255);
//    FastLED.show();
//  leds[26] = CRGB(255, 255, 255);
//    FastLED.show();
//  delay(20);
//  }
//else{
//  leds[4] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[26] = CRGB(0, 0, 0);
//    FastLED.show();
//  }

if ((distance >=13) && (distance <=19)){
  leds[5] = CRGB(255, 255, 255);
    FastLED.show();
  leds[25] = CRGB(255, 255, 255);
    FastLED.show();
  leds[6] = CRGB(255, 255, 255);
    FastLED.show();
  leds[24] = CRGB(255, 255, 255);
    FastLED.show();
  delay(20);
  }
else{
  leds[5] = CRGB(0, 0, 0);
    FastLED.show();
  leds[25] = CRGB(0, 0, 0);
    FastLED.show();
  leds[6] = CRGB(0, 0, 0);
    FastLED.show();
  leds[24] = CRGB(0, 0, 0);
    FastLED.show();
  }
  
//if ((distance >=17) && (distance <=19)){
//  leds[5] = CRGB(255, 255, 255);
//    FastLED.show();
//  leds[25] = CRGB(255, 255, 255);
//    FastLED.show();
//  delay(20);
//  }
//else{
//  leds[5] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[25] = CRGB(0, 0, 0);
//    FastLED.show();
//  }
  
if ((distance >=20) && (distance <=26)){
  leds[7] = CRGB(255, 255, 255);
    FastLED.show();
  leds[23] = CRGB(255, 255, 255);
    FastLED.show();
  leds[8] = CRGB(255, 255, 255);
    FastLED.show();
  leds[22] = CRGB(255, 255, 255);
    FastLED.show();
  delay(20);
  }
else{
  leds[7] = CRGB(0, 0, 0);
    FastLED.show();
  leds[23] = CRGB(0, 0, 0);
    FastLED.show();
  leds[8] = CRGB(0, 0, 0);
    FastLED.show();
  leds[22] = CRGB(0, 0, 0);
    FastLED.show();
  }
  
//if ((distance >=23) && (distance <=26)){
//  leds[7] = CRGB(255, 255, 255);
//    FastLED.show();
//  leds[23] = CRGB(255, 255, 255);
//    FastLED.show();
//  delay(20);
//  }
//else{
//  leds[7] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[23] = CRGB(0, 0, 0);
//    FastLED.show();
//  }
  
if ((distance >=27) && (distance <=32)){
  leds[9] = CRGB(255, 255, 255);
    FastLED.show();
  leds[21] = CRGB(255, 255, 255);
    FastLED.show();
  leds[10] = CRGB(255, 255, 255);
    FastLED.show();
  leds[20] = CRGB(255, 255, 255);
    FastLED.show();
  delay(20);
  }
else{
  leds[9] = CRGB(0, 0, 0);
    FastLED.show();
  leds[21] = CRGB(0, 0, 0);
    FastLED.show();
  leds[10] = CRGB(0, 0, 0);
    FastLED.show();
  leds[20] = CRGB(0, 0, 0);
    FastLED.show();
  }
  
//if ((distance >=30) && (distance <=32)){
//  leds[9] = CRGB(255, 255, 255);
//    FastLED.show();
//  leds[21] = CRGB(255, 255, 255);
//    FastLED.show();
//  delay(20);
//  }
//else{
//  leds[9] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[21] = CRGB(0, 0, 0);
//    FastLED.show();
//  }
  
if ((distance >=33) && (distance <=39)){
  leds[11] = CRGB(255, 255, 255);
    FastLED.show();
  leds[19] = CRGB(255, 255, 255);
    FastLED.show();
  leds[12] = CRGB(255, 255, 255);
    FastLED.show();
  leds[18] = CRGB(255, 255, 255);
    FastLED.show();
  delay(20);
  }
else{
  leds[11] = CRGB(0, 0, 0);
    FastLED.show();
  leds[19] = CRGB(0, 0, 0);
    FastLED.show();
  leds[12] = CRGB(0, 0, 0);
    FastLED.show();
  leds[18] = CRGB(0, 0, 0);
    FastLED.show();
  }
  
//if ((distance >=37) && (distance <=39)){
//  leds[11] = CRGB(255, 255, 255);
//    FastLED.show();
//  leds[19] = CRGB(255, 255, 255);
//    FastLED.show();
//  delay(20);
//  }
//else{
//  leds[11] = CRGB(0, 0, 0);
//    FastLED.show();
//  leds[19] = CRGB(0, 0, 0);
//    FastLED.show();
//  }
  
if ((distance >=40) && (distance <=42)){
  leds[14] = CRGB(50, 50, 50);
    FastLED.show();
  leds[15] = CRGB(50, 50, 50);
    FastLED.show();
  leds[16] = CRGB(50, 50, 50);
    FastLED.show();
  leds[17] = CRGB(50, 50, 50);
    FastLED.show();
  leds[13] = CRGB(50, 50, 50);
    FastLED.show();
  delay(20);
  }
else{
  leds[14] = CRGB(0,0,0);
    FastLED.show();
  leds[15] = CRGB(0,0,0);
    FastLED.show();
  leds[16] = CRGB(0,0,0);
    FastLED.show();
  leds[17] = CRGB(0,0,0);
    FastLED.show();
  leds[13] = CRGB(0,0,0);
    FastLED.show();
  }


}
