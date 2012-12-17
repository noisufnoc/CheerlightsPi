#include "Tlc5940.h"

void setup()
{
  // Call Tlc.init() to setup the tlc.
  Tlc.init();
  
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
        Tlc.clear();

	// LED 1
        Tlc.set(0, 500);
        Tlc.set(1, 0);
        Tlc.set(2, 0);
	// LED 2
        Tlc.set(3, 500);
        Tlc.set(4, 0);
        Tlc.set(5, 0);
	// LED 3
        Tlc.set(6, 500);
        Tlc.set(7, 0);
        Tlc.set(8, 0);
	// LED 4
        Tlc.set(9, 500);
        Tlc.set(10, 0);
        Tlc.set(11, 0);
	// LED 5
        Tlc.set(12, 500);
        Tlc.set(13, 0);
        Tlc.set(14, 0);
	// LED 6
        Tlc.set(16, 500);
        Tlc.set(17, 0);
        Tlc.set(18, 0);
	// LED 7
        Tlc.set(19, 500);
        Tlc.set(20, 0);
        Tlc.set(21, 0);
	// LED 8
        Tlc.set(22, 500);
        Tlc.set(23, 0);
        Tlc.set(24, 0);
	// LED 9
        Tlc.set(25, 500);
        Tlc.set(26, 0);
        Tlc.set(27, 0);
	// LED 10
        Tlc.set(28, 500);
        Tlc.set(29, 0);
        Tlc.set(30, 0);

        Tlc.update();
    }
    else if (String(stringIn) == "green")
    {  
    	Serial.println("green");
        Tlc.clear();

        // LED 1
        Tlc.set(0, 0);
        Tlc.set(1, 500);
        Tlc.set(2, 0);
        // LED 2
        Tlc.set(3, 0);
        Tlc.set(4, 500);
        Tlc.set(5, 0);
        // LED 3
        Tlc.set(6, 0);
        Tlc.set(7, 500);
        Tlc.set(8, 0);
        // LED 4
        Tlc.set(9, 0);
        Tlc.set(10, 500);
        Tlc.set(11, 0);
        // LED 5
        Tlc.set(12, 0);
        Tlc.set(13, 500);
        Tlc.set(14, 0);
        // LED 6
        Tlc.set(16, 0);
        Tlc.set(17, 500);
        Tlc.set(18, 0);
        // LED 7
        Tlc.set(19, 0);
        Tlc.set(20, 500);
        Tlc.set(21, 0);
        // LED 8
        Tlc.set(22, 0);
        Tlc.set(23, 500);
        Tlc.set(24, 0);
        // LED 9
        Tlc.set(25, 0);
        Tlc.set(26, 500);
        Tlc.set(27, 0);
        // LED 10
        Tlc.set(28, 0);
        Tlc.set(29, 500);
        Tlc.set(30, 0);

        Tlc.update();
    }
    else if (String(stringIn) == "blue")
    {  
    	Serial.println("blue");
        Tlc.clear();

        // LED 1
        Tlc.set(0, 0);
        Tlc.set(1, 0);
        Tlc.set(2, 500);
        // LED 2
        Tlc.set(3, 0);
        Tlc.set(4, 0);
        Tlc.set(5, 500);
        // LED 3
        Tlc.set(6, 0);
        Tlc.set(7, 0);
        Tlc.set(8, 500);
        // LED 4
        Tlc.set(9, 0);
        Tlc.set(10, 0);
        Tlc.set(11, 500);
        // LED 5
        Tlc.set(12, 0);
        Tlc.set(13, 0);
        Tlc.set(14, 500);
        // LED 6
        Tlc.set(16, 0);
        Tlc.set(17, 0);
        Tlc.set(18, 500);
        // LED 7
        Tlc.set(19, 0);
        Tlc.set(20, 0);
        Tlc.set(21, 500);
        // LED 8
        Tlc.set(22, 0);
        Tlc.set(23, 0);
        Tlc.set(24, 500);
        // LED 9
        Tlc.set(25, 0);
        Tlc.set(26, 0);
        Tlc.set(27, 500);
        // LED 10
        Tlc.set(28, 0);
        Tlc.set(29, 0);
        Tlc.set(30, 500);

        Tlc.update();
    }
    else if (String(stringIn) == "purple")
    {
        Serial.println("puple");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 250);
        Tlc.set(1, 0);
        Tlc.set(2, 250);
	// LED 2
        Tlc.set(3, 250);
        Tlc.set(4, 0);
        Tlc.set(5, 250);
	// LED 3
        Tlc.set(6, 250);
        Tlc.set(7, 0);
        Tlc.set(8, 250);
	// LED 4
        Tlc.set(9, 250);
        Tlc.set(10, 0);
        Tlc.set(11, 250);
	// LED 5
        Tlc.set(12, 250);
        Tlc.set(13, 0);
        Tlc.set(14, 250);
	// LED 6
        Tlc.set(16, 250);
        Tlc.set(17, 0);
        Tlc.set(18, 250);
	// LED 7
        Tlc.set(19, 250);
        Tlc.set(20, 0);
        Tlc.set(21, 250);
	// LED 8
        Tlc.set(22, 250);
        Tlc.set(23, 0);
        Tlc.set(24, 250);
	// LED 9
        Tlc.set(25, 250);
        Tlc.set(26, 0);
        Tlc.set(27, 250);
	// LED 10
        Tlc.set(28, 250);
        Tlc.set(29, 0);
        Tlc.set(30, 250);

        Tlc.update();
     }
     else if (String(stringIn) == "cyan")
     {
        Serial.println("cyan");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 0);
        Tlc.set(1, 500);
        Tlc.set(2, 500);
	// LED 2
        Tlc.set(3, 0);
        Tlc.set(4, 500);
        Tlc.set(5, 500);
	// LED 3
        Tlc.set(6, 0);
        Tlc.set(7, 500);
        Tlc.set(8, 500);
	// LED 4
        Tlc.set(9, 0);
        Tlc.set(10, 500);
        Tlc.set(11, 500);
	// LED 5
        Tlc.set(12, 0);
        Tlc.set(13, 500);
        Tlc.set(14, 500);
	// LED 6
        Tlc.set(16, 0);
        Tlc.set(17, 500);
        Tlc.set(18, 500);
	// LED 7
        Tlc.set(19, 0);
        Tlc.set(20, 500);
        Tlc.set(21, 500);
	// LED 8
        Tlc.set(22, 0);
        Tlc.set(23, 500);
        Tlc.set(24, 500);
	// LED 9
        Tlc.set(25, 0);
        Tlc.set(26, 500);
        Tlc.set(27, 500);
	// LED 10
        Tlc.set(28, 0);
        Tlc.set(29, 500);
        Tlc.set(30, 500);

        Tlc.update();
     }
     else if (String(stringIn) == "magenta")
     {
        Serial.println("magenta");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 500);
        Tlc.set(1, 0);
        Tlc.set(2, 500);
	// LED 2
        Tlc.set(3, 500);
        Tlc.set(4, 0);
        Tlc.set(5, 500);
	// LED 3
        Tlc.set(6, 500);
        Tlc.set(7, 0);
        Tlc.set(8, 500);
	// LED 4
        Tlc.set(9, 500);
        Tlc.set(10, 0);
        Tlc.set(11, 500);
	// LED 5
        Tlc.set(12, 500);
        Tlc.set(13, 0);
        Tlc.set(14, 500);
	// LED 6
        Tlc.set(16, 500);
        Tlc.set(17, 0);
        Tlc.set(18, 500);
	// LED 7
        Tlc.set(19, 500);
        Tlc.set(20, 0);
        Tlc.set(21, 500);
	// LED 8
        Tlc.set(22, 500);
        Tlc.set(23, 0);
        Tlc.set(24, 500);
	// LED 9
        Tlc.set(25, 500);
        Tlc.set(26, 0);
        Tlc.set(27, 500);
	// LED 10
        Tlc.set(28, 500);
        Tlc.set(29, 0);
        Tlc.set(30, 500);

        Tlc.update();
     }
     else if (String(stringIn) == "yellow")
     {
        Serial.println("yellow");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 500);
        Tlc.set(1, 500);
        Tlc.set(2, 0);
	// LED 2
        Tlc.set(3, 500);
        Tlc.set(4, 500);
        Tlc.set(5, 0);
	// LED 3
        Tlc.set(6, 500);
        Tlc.set(7, 500);
        Tlc.set(8, 0);
	// LED 4
        Tlc.set(9, 500);
        Tlc.set(10, 500);
        Tlc.set(11, 0);
	// LED 5
        Tlc.set(12, 500);
        Tlc.set(13, 500);
        Tlc.set(14, 0);
	// LED 6
        Tlc.set(16, 500);
        Tlc.set(17, 500);
        Tlc.set(18, 0);
	// LED 7
        Tlc.set(19, 500);
        Tlc.set(20, 500);
        Tlc.set(21, 0);
	// LED 8
        Tlc.set(22, 500);
        Tlc.set(23, 500);
        Tlc.set(24, 0);
	// LED 9
        Tlc.set(25, 500);
        Tlc.set(26, 500);
        Tlc.set(27, 0);
	// LED 10
        Tlc.set(28, 500);
        Tlc.set(29, 500);
        Tlc.set(30, 0);

        Tlc.update();
     }
     else if (String(stringIn) == "orange")
     {
        Serial.println("orange");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 500);
        Tlc.set(1, 125);
        Tlc.set(2, 0);
	// LED 2
        Tlc.set(3, 500);
        Tlc.set(4, 125);
        Tlc.set(5, 0);
	// LED 3
        Tlc.set(6, 500);
        Tlc.set(7, 125);
        Tlc.set(8, 0);
	// LED 4
        Tlc.set(9, 500);
        Tlc.set(10, 125);
        Tlc.set(11, 0);
	// LED 5
        Tlc.set(12, 500);
        Tlc.set(13, 125);
        Tlc.set(14, 0);
	// LED 6
        Tlc.set(16, 500);
        Tlc.set(17, 125);
        Tlc.set(18, 0);
	// LED 7
        Tlc.set(19, 500);
        Tlc.set(20, 125);
        Tlc.set(21, 0);
	// LED 8
        Tlc.set(22, 500);
        Tlc.set(23, 125);
        Tlc.set(24, 0);
	// LED 9
        Tlc.set(25, 500);
        Tlc.set(26, 125);
        Tlc.set(27, 0);
	// LED 10
        Tlc.set(28, 500);
        Tlc.set(29, 125);
        Tlc.set(30, 0);

        Tlc.update();
     }
     else if (String(stringIn) == "white" || String(stringIn) == "warmwhite")
     {
        Serial.println("white");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 500);
        Tlc.set(1, 500);
        Tlc.set(2, 500);
	// LED 2
        Tlc.set(3, 500);
        Tlc.set(4, 500);
        Tlc.set(5, 500);
	// LED 3
        Tlc.set(6, 500);
        Tlc.set(7, 500);
        Tlc.set(8, 500);
	// LED 4
        Tlc.set(9, 500);
        Tlc.set(10, 500);
        Tlc.set(11, 500);
	// LED 5
        Tlc.set(12, 500);
        Tlc.set(13, 500);
        Tlc.set(14, 500);
	// LED 6
        Tlc.set(16, 500);
        Tlc.set(17, 500);
        Tlc.set(18, 500);
	// LED 7
        Tlc.set(19, 500);
        Tlc.set(20, 500);
        Tlc.set(21, 500);
	// LED 8
        Tlc.set(22, 500);
        Tlc.set(23, 500);
        Tlc.set(24, 500);
	// LED 9
        Tlc.set(25, 500);
        Tlc.set(26, 500);
        Tlc.set(27, 500);
	// LED 10
        Tlc.set(28, 500);
        Tlc.set(29, 500);
        Tlc.set(30, 500);

        Tlc.update();
     }
     else if (String(stringIn) == "black" || String(stringIn) == "off")
     {
        Serial.println("black");
        Tlc.clear();

	// LED 1
        Tlc.set(0, 0);
        Tlc.set(1, 0);
        Tlc.set(2, 0);
	// LED 2
        Tlc.set(3, 0);
        Tlc.set(4, 0);
        Tlc.set(5, 0);
	// LED 3
        Tlc.set(6, 0);
        Tlc.set(7, 0);
        Tlc.set(8, 0);
	// LED 4
        Tlc.set(9, 0);
        Tlc.set(10, 0);
        Tlc.set(11, 0);
	// LED 5
        Tlc.set(12, 0);
        Tlc.set(13, 0);
        Tlc.set(14, 0);
	// LED 6
        Tlc.set(16, 0);
        Tlc.set(17, 0);
        Tlc.set(18, 0);
	// LED 7
        Tlc.set(19, 0);
        Tlc.set(20, 0);
        Tlc.set(21, 0);
	// LED 8
        Tlc.set(22, 0);
        Tlc.set(23, 0);
        Tlc.set(24, 0);
	// LED 9
        Tlc.set(25, 0);
        Tlc.set(26, 0);
        Tlc.set(27, 0);
	// LED 10
        Tlc.set(28, 0);
        Tlc.set(29, 0);
        Tlc.set(30, 0);

        Tlc.update();
     }

  }
} // End loop
