#include "lightBulb.h"
#include <iostream>
using namespace std;
//implementation for lightBulb class

lightBulb::lightBulb()
{
    light = ON;
    cout << "Default bulb is created with light on" << endl;
}

lightBulb::lightBulb(bool light)
{
    this->light = light;
    cout << "Custom bulb is created" << endl;
}

void lightBulb::turnOn()
{
    light = ON;
} 

void lightBulb::turnOff()
{
    light = OFF;
}

bool lightBulb::isOn()
{
    return light == ON;
}

void lightBulb::show()
{
    if (light == ON) cout << "Light is on" << endl;
    else
    {
        cout << "Light is off" << endl;
    }
    

}