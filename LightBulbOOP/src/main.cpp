#include <iostream>
#include "lightBulb.h"
using namespace std;


int main()
{
	//create a light bulb object in stack memory
	lightBulb kitchenBulb;

	kitchenBulb.show();		//show state of light bulb

	kitchenBulb.turnOn();	//tell the bulb to turn on
	kitchenBulb.show();		//show state of light bulb

	
	kitchenBulb.turnOff();	//tell the bulb to turn off
	kitchenBulb.show();		//show state of light bulb

	if (!kitchenBulb.isOn())
	{
		cout << "It's so dark in here" << endl;
	}
}