#ifndef _LIGHT_BULB_H //neu chua dinh nghia thi dinh nghia no ra
#define _LIGHT_BULB_H

#define ON true
#define OFF false

class lightBulb
{
private:
    /* data */
    bool light;
public:
    lightBulb();            //default constructor
    lightBulb(bool light);  //parameter constructor

   void turnOn();
   void turnOff();
   bool isOn();
   void show();
};

#endif