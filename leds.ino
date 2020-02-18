#include <FastLED.h>
#define NUM_LEDS 60
#define DATA_PIN 6



CRGB leds[NUM_LEDS];



struct RGB {
  byte r;
  byte g;
  byte b;
}



extern volatile unsigned long timer0_millis;


void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:

}
