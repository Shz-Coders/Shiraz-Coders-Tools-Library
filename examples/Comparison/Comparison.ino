/*
 * www.shzcoders.ir
 * 
 * ©All right reserved shzcoders.ir | 2020
 * 
 */

#include <sctl.h>

SCTL sc; // Object

#define number1 200
#define number2 300
#define value   250

void setup() {

  Serial.begin(9600);

  pinMode(13, OUTPUT);

  if (sc.comp(value, number1, number2)) {
    Serial.print("Value(");
    Serial.print(value);
    Serial.print(") is between number1 (");
    Serial.print(number1);
    Serial.print(") and number2 (");
    Serial.print(number2);
    Serial.println(")");
  } // If value is between number1 and number 2, sc.comp() returns 'true'

  if (sc.ifMore(value, number2)) {
    Serial.println("value is more than number2");
  }  // If value is more than number2, sc.ifMore() returns 'true'

  else if (sc.ifLess(value, number2)) {
    Serial.println("value is fewer than number 2");
  } // If value is fewer tham number2, sc.ifLess() returns 'true'

}

void loop() {



}
