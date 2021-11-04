#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif
#define LED_PIN    6
#define LED_COUNT 60
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
 #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
// put your setup code here, to run once:
strip.begin();
strip.show();
strip.setBrightness(50);
}

void loop() {
  // put your main code here, to run repeatedly:
 //colorWipe(strip.Color(0, 0, 255), 50);
 somthig();

  

}
                       
  

void colorWipe(uint32_t color, int wait){ 
  for(int i=1; i<strip.numPixels();i) {
      strip.setPixelColor(i, color);
      strip.show();
      
  }
}

void somthig() {
  strip.setPixelColor(1,strip.Color(0,255,0));
  strip.show();
}
