// will uppdate with defined bit controls
// AD9833 class (.h and .cpp)
//

#include <SPI.h>
#include "AD9833.h"

constexpr uint8_t AD9833_CS = 10;
//

void setup(){
  //Declare ~CS pins as outputs;
  pinMode(AD9833_CS, OUTPUT);
  
  //Disable ~CS 
  digitalWriteFast(AD9833_CS, HIGH);

  //Declare AD9833 object
}

void loop() {
   
}
