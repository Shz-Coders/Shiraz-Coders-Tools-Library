/*
 * www.shzcoders.ir
 * 
 * ©All right reserved shzcoders.ir | 2020
 * 
 */

#include <sctl.h>

SCTL sc; // Object

void setup() {

  Serial.begin(9600);

  pinMode(13, OUTPUT);


}

void loop() {

  sc.blinkWithDelay(13, 500); // Blink every 500ms with 'delay();'

}
