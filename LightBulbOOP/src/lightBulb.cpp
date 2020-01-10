#include "lightBulb.h"
#include <iostream>
using namespace std;
//implementation for lightBulb class

void lightBulb::turnOn()
{
    light = true;
} 

void lightBulb::turnOff()
{
    light = false;
}

bool lightBulb::isOn()
{
    return light == true;
}

void lightBulb::show()
{
    if (light == true) cout << "Light is on" << endl;
    else
    {
        cout << "Light is off" << endl;
    }
    

}