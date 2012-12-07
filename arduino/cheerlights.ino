#define GREEN 5
#define BLUE 3
#define RED 6

void setup() {
  // Setup Serial
  Serial.begin(9600);
  delay(100);
  
  Serial.flush();
  delay(100);
  
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, HIGH);
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
    //   Currently it echos the color back to serial for debugging
    if (String(stringIn) == "red")
    {  
    	Serial.println("red");
        analogWrite( RED, 0 );
        analogWrite( GREEN, 255 );
        analogWrite( BLUE, 255);
    }
    else if (String(stringIn) == "green")
    {  
    	Serial.println("green");
        analogWrite( RED, 255 );
        analogWrite( GREEN, 0 );
        analogWrite( BLUE, 255 );
    }
    else if (String(stringIn) == "blue")
    {  
    	Serial.println("blue");
        analogWrite( RED, 255 );
        analogWrite( GREEN, 255 );
        analogWrite( BLUE, 0 );
    }
    else if (String(stringIn) == "cyan")
    {
        Serial.println("cyan");
        analogWrite( RED, 255 );
        analogWrite( GREEN, 0 );
        analogWrite( BLUE, 0 );
    }
    else if (String(stringIn) == "purple")
    {  
    	Serial.println("purple");
        analogWrite( RED, 128 );
        analogWrite( GREEN, 255 );
        analogWrite( BLUE, 128 );
    }
    else if (String(stringIn) == "magenta")
    {
        Serial.println("magenta");
        analogWrite( RED, 0 );
        analogWrite( GREEN, 255 );
        analogWrite( BLUE, 0 );
    }
    else if (String(stringIn) == "yellow")
    {
        Serial.println("yellow");
        analogWrite( RED, 0 );
        analogWrite( GREEN, 0 );
        analogWrite( BLUE, 255 );
    }
    else if (String(stringIn) == "orange")
    {
        Serial.println("orange");
        analogWrite( RED, 0 );
        analogWrite( GREEN, 90 );
        analogWrite( BLUE, 255 );
    }
    else if (String(stringIn) == "white" || String(stringIn) == "warmwhite")
    {  
    	Serial.println("white");
        analogWrite( RED, 0 );
        analogWrite( GREEN, 0 );
        analogWrite( BLUE, 0 );
    }
    else if (String(stringIn) == "black" || String(stringIn) == "off")
    {
        Serial.println("black");
        analogWrite( BLUE, 255 );
        analogWrite( GREEN, 255 );
        analogWrite( RED, 255 );
    }
  }
} // End loop
