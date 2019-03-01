#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup(){        
    FastLED.addLeds<WS2812B,DATA_PIN>(leds,NUM_LEDS);}

void loop(){
    leds[67] = CRGB::Red;
    delay(1000);
    leds[71] = CRGB::Blue;
    delay(1000);
    leds[75] = CRGB::Red;
    delay(1000);
    leds[79] = CRGB::Blue;
    delay(1000);
    leds[59] = CRGB::Purple;
    delay(1000);
    leds[55] = CRGB::Red;
    delay(1000);
    leds[51] = CRGB::Purple;
    delay(1000);
    leds[47] = CRGB::Red;
    delay(1000);
    leds[83] = CRGB::Red;
    delay(1000);
    leds[87] = CRGB::Yellow;
    delay(1000);
    leds[91] = CRGB::Red;
    delay(1000);
    leds[95] = CRGB::Yellow;
    delay(1000);
    leds[43] = CRGB::Green;
    delay(1000);
    leds[39] = CRGB::Red;
    delay(1000);
    leds[35] = CRGB::Green;
    delay(1000);
    leds[31] = CRGB::Red;
    delay(1000);
    leds[99] = CRGB::Red;
    delay(1000);
    leds[103] = CRGB::Violet;
    delay(1000);
    leds[107] = CRGB::Red;
    delay(1000);
    leds[111] = CRGB::Violet;
    delay(1000);
    leds[27] = CRGB::PapayaWhip;
    delay(1000);
    leds[23] = CRGB::Red;
    delay(1000);
    leds[19] = CRGB::PapayaWhip;
    delay(1000);
    leds[15] = CRGB::Red;
    FastLED.show();
    delay(1000);
    FastLED.clear();
    
     for(int i = 0; i<NUM_LEDS;i++){
        leds[i] = CRGB::Red;
        FastLED.show();
        delay(30);
        leds[i] = CRGB::Teal;
    }
    FastLED.clear();
    for(int i = 0; i<NUM_LEDS;i++){
        fill_rainbow(leds,NUM_LEDS,0,1);
        FastLED.show();
        delay(30);
    }
    FastLED.clear();
    for(int i = 0; i<NUM_LEDS;i++){
        leds[i - 1] = CRGB::Yellow;
        leds[i - 1] = CRGB::Red;
        leds[i - 1] = CRGB::Blue;
        leds[i - 1] = CRGB::Pink;
        leds[i - 1] = CRGB::Orange;
        FastLED.show();
        delay(30);
    }
    FastLED.clear();
}


