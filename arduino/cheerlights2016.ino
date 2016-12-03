#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

// This sketch uses an Adafruit NeoPixel
// https://www.adafruit.com/categories/168

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);


void setup()
{
  // Initialize the NeoPixel
  strip.begin();
  strip.show(); // All lights off

  // Setup Serial
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available() > 0)
  {
    String r  = Serial.readStringUntil(',');
    Serial.read(); //next character is comma, so skip it using this
    String g = Serial.readStringUntil(',');
    Serial.read();
    String b  = Serial.readStringUntil('\0');
    //parse your data here. example:
    //double x = Double.parseDouble(first);

    String output = "R:"+r+" G:"+g+" B:"+b;

    // Echo command back to serial monitor
    Serial.println(output);
    delay(200);

    colorWipe(strip.Color(r.toInt(), g.toInt(), b.toInt()), 50);
    
  }
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
