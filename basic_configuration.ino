#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 5

// From NeoPixel library:
// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(496, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'
}


void loop() { 
  
//Devide strip into steps. Different number of LED on each step. 
stepcolor(0,27,strip.Color(255, 255, 255));
delay(100);
stepcolor(28,56,strip.Color(255, 255, 255));
delay(100);
stepcolor(57,85,strip.Color(255, 255, 255));
delay(100);
stepcolor(86,114,strip.Color(255, 255, 255));
delay(100);
stepcolor(115,142,strip.Color(255, 255, 255));
delay(100);
stepcolor(143,172,strip.Color(255, 255, 255));
delay(100);
stepcolor(173,203,strip.Color(255, 255, 255));
delay(100);
stepcolor(204,232,strip.Color(255, 255, 255));
delay(100);
stepcolor(233,261,strip.Color(255, 255, 255));
delay(100);
stepcolor(262,290,strip.Color(255, 255, 255)); 
delay(100);
stepcolor(291,319,strip.Color(255, 255, 255));
delay(100);
stepcolor(320,348,strip.Color(255, 255, 255));
delay(100);
stepcolor(349,377,strip.Color(255, 255, 255)); 
delay(100);
stepcolor(378,406,strip.Color(255, 255, 255)); 
delay(100);
stepcolor(407,434,strip.Color(255, 255, 255));
delay(100);
stepcolor(435,462,strip.Color(255, 255, 255));
delay(100);
stepcolor(463,495,strip.Color(255, 255, 255));
delay(3000);

} //loop end


//Color insert function
//s- start 
//e -end
//c - color
void stepcolor(int s, int e, uint32_t c) {
  for(s; s<=e; s++) {
    strip.setPixelColor(s, c);
  }
   strip.show();
}
