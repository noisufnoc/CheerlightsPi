static uint16_t c;

void setup() {
  // Setup Serial
  Serial.begin(9600);
  delay(100);
  
  Serial.flush();
  delay(100);
}

void loop() {
  
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
    //   Currently it just echos the color back to serial for debugging
    if (String(stringIn) == "white")
    {  
    	Serial.println("white");
    }
    else if (String(stringIn) == "black")
    {  
    	Serial.println("black");
    }
    else if (String(stringIn) == "red")
    {  
    	Serial.println("red");
    }
    else if (String(stringIn) == "green")
    {  
        Serial.println("green");
    }
    else if (String(stringIn) == "blue")
    {  
        Serial.println("blue");
    }
    else if (String(stringIn) == "cyan")
    {  
        Serial.println("cyan");
    }
    else if (String(stringIn) == "magenta")
    {  
        Serial.println("magenta");
    }
    else if (String(stringIn) == "yellow")
    {  
        Serial.println("yellow");
    }
    else if (String(stringIn) == "purple")
    {  
        Serial.println("purple");
    }
    else if (String(stringIn) == "orange")
    {  
        Serial.println("green");
    }
    else if (String(stringIn) == "warmwhite")
    {  
        Serial.println("warmwhite");
    }
    else if (String(stringIn) == "off")
    {  
        Serial.println("off");
    }
  }
} // End loop



