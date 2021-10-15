#include <Arduino.h>

const int LDR = 12;
int oldState = 0;

void setup()
{
  Serial.begin(112500);
}

void loop()
{ 
  int newState = analogRead(LDR) / 1000;
  
  if(newState != oldState)
  {
    if(newState >= 1)
    {
      Serial.print("\nDay: ");
      Serial.print(newState);
    }
    else
    {
      Serial.print("\nNight: ");
      Serial.print(newState);
    }
  
  }
  oldState = newState;
  delay(500);
}

