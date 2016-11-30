#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

// This sketch uses an Adafruit NeoPixel
// https://www.adafruit.com/categories/168

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

// The Colors of CheerLights
uint32_t red = strip.Color(255, 0, 0); // (#FF0000)
uint32_t green = strip.Color(0, 128, 0); // (#008000)
uint32_t blue = strip.Color(0, 0, 255); // (#0000FF)
uint32_t cyan = strip.Color(0, 255, 255); // (#00FFFF)
uint32_t white = strip.Color(255, 255, 255); // (#FFFFFF)
uint32_t oldlace = strip.Color(253, 245, 230); // (#FDF5E6)
uint32_t warmwhite = strip.Color(253, 245, 230); // (#FDF5E6)
uint32_t purple = strip.Color(128, 0, 128); // (#800080)
uint32_t magenta = strip.Color(255, 0, 255); // (#FF00FF)
uint32_t yellow = strip.Color(255, 255, 0); // (#FFFF00)
uint32_t orange = strip.Color(255, 165, 0); // (#FFA500)
uint32_t pink = strip.Color(255, 192, 203); // (#FFC0CB)

void setup()
{
  // Initialize the NeoPixel
  strip.begin();
  strip.show(); // All lights off
  
  // Setup Serial
  Serial.begin(9600);
  delay(100);
  
  Serial.flush();
  delay(100);
}

void loop()
{
  
    // Listen to serial commands from RaspPi
  if(Serial.available() > 0)
  {  
    delay(100); 

    char charIn = 0; 
    byte i = 0; 
    char stringIn[32] = "";
   
    while(Serial.available())
    {
      charIn = Serial.read();
      stringIn[i] = charIn; 
      i += 1;
    }
    
    // Echo Received Commands on the Serial Monitor
    Serial.println("CheerLight Command Received: "+String(stringIn));
    delay(200); 
    
    // Send matching commands LED
    //   Currently it echos the color back to serial for debugging

    if (String(stringIn) == "red")
    {  
      Serial.println("red");
      colorWipe(red);
    }
    else if (String(stringIn) == "green")
    {  
      Serial.println("green");
      colorWipe(green);
    }
    else if (String(stringIn) == "blue")
    {  
      Serial.println("blue");
      colorWipe(blue);
    }
    else if (String(stringIn) == "cyan")
    {  
      Serial.println("cyan");
      colorWipe(cyan);
    }
    else if (String(stringIn) == "white")
    {  
      Serial.println("white");
      colorWipe(white);
    }
    else if (String(stringIn) == "oldlace")
    {  
      Serial.println("oldlace");
      colorWipe(oldlace);
    }
    else if (String(stringIn) == "warmwhite")
    {  
      Serial.println("warmwhite");
      colorWipe(warmwhite);
    }
    else if (String(stringIn) == "purple")
    {  
      Serial.println("purple");
      colorWipe(purple);
    }
    else if (String(stringIn) == "magenta")
    {  
      Serial.println("magenta");
      colorWipe(magenta);
    }
    else if (String(stringIn) == "yellow")
    {  
      Serial.println("yellow");
      colorWipe(yellow);
    }
    else if (String(stringIn) == "orange")
    {  
      Serial.println("orange");
      colorWipe(orange);
    }
    else if (String(stringIn) == "pink")
    {  
      Serial.println("pink");
      colorWipe(pink);
    }
   } // End loop
}

// Fill the dots one after the other with a color
// Example from Adafruit library
void colorWipe(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
  }
}
