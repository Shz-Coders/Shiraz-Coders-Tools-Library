#ifndef SCTL_h
#define SCTL_H

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
    #include "pins_arduino.h"
    #include "WConstants"
#endif

class SCTL{

private:
	unsigned long sccounter;
	unsigned long cfcounter;
	unsigned long ccounting;

	int cLedLevel = 0;

	bool bledState = false;
	bool cLedState = false;

public:
    SCTL();
	void setOut(int pinOfLed);
	void blinkWithDelay(int bledPin, int times);
	void blinkNoDelay(int bledPin, int times);
	void flashPin(int bledPin, int bledCounter, int timeoutForBlink);
	int countFrom(int sccFrom, int sccTo, int ccDelay);
	bool comp(int scValue, int scMin, int scMax);
	bool ifMore(int scValue, int scMin);
	bool ifLess(int scValue, int scMax);
};

#endif