#include "SCTL.h"

SCTL::SCTL(){

}

void SCTL::setOut(int pinOfLed){
	pinMode(pinOfLed, OUTPUT);
}

void SCTL::blinkWithDelay(int bledPin, int sctimes){
	digitalWrite(bledPin, HIGH);
	delay(sctimes);
	digitalWrite(bledPin, LOW);
	delay(sctimes);
}

void SCTL::blinkNoDelay(int bledPin, int sctimes){
	if(millis() > sccounter){
		sccounter = millis() + sctimes;
		if(bledState == false){
			bledState = true;
		}
		else if(bledState == true){
			bledState = false;
		}
		digitalWrite(bledPin, bledState);
	}
}

void SCTL::flashPin(int fledPin, int fcount, int ftimeout){
	for(int i = 0; i <= fcount; i++){
		digitalWrite(fledPin, HIGH);
		delay(ftimeout/2);
		digitalWrite(fledPin, LOW);
		delay(ftimeout/2);
	}
}

bool SCTL::comp(int scValue, int scMin, int scMax){
	if(scValue >= scMin && scValue <= scMax){
		return true;
	}
	else{
		return false;
	}
}

bool SCTL::ifMore(int scValue, int scMin){
	if(scValue >= scMin){
		return true;
	}
	else if(scValue < scMin){
		return false;
	}
}


bool SCTL::ifLess(int scValue, int scMax){
	if(scValue <= scMax){
		return true;
	}
	else if(scValue > scMax){
		return false;
	}
}