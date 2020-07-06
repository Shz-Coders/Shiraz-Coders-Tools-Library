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

  sc.flashPin(13, 10, 250); // Blink every 250ms for 10 times

}

void loop() {



}
