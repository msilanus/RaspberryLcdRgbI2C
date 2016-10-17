#include <iostream>
#include <string>
#include "ci2c.h"
#include "rgb_lcd.h"

using namespace std;

int main()
{
	rgb_lcd *myLcd;
	myLcd = new rgb_lcd();
    	myLcd->begin(16,2);
    	myLcd->setRGB(0,0,255);
	myLcd->setCursor(5, 0);
    	myLcd->write("Bonjour");
	myLcd->setCursor(1, 1); 
    	myLcd->write("Afficheur i2c");
	sleep(5);
	myLcd->clear();
	myLcd->setColor(WHITE);
	myLcd->setCursor(0, 0);
	myLcd->write("HO ...");
	myLcd->setCursor(0, 1); 
    	myLcd->write("YES !!!");
	while(1)
	{
		usleep(250000);
		myLcd->scrollDisplayRight();
	}
}
