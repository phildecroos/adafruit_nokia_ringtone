#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup()
{ 
  CircuitPlayground.begin();
}

void loop() 
{
  if (CircuitPlayground.leftButton())
  {
    CircuitPlayground.setPixelColor(0, 50, 0, 0);
    
    CircuitPlayground.playTone(1319, 60);
    CircuitPlayground.playTone(1175, 60);
    CircuitPlayground.playTone(740, 120);
    CircuitPlayground.playTone(830.6, 120);
    CircuitPlayground.playTone(1109, 60);
    CircuitPlayground.playTone(987.8, 60);
    CircuitPlayground.playTone(587.3, 120);
    CircuitPlayground.playTone(659.3, 120);
    CircuitPlayground.playTone(987.8, 60);
    CircuitPlayground.playTone(880, 60);
    CircuitPlayground.playTone(554.4, 120);
    CircuitPlayground.playTone(659.3, 120);
    CircuitPlayground.playTone(880, 240);

    CircuitPlayground.clearPixels();
    delay(240);
  }
}
