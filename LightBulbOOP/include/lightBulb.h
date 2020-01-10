#ifndef _LIGHT_BULB_H //neu chua dinh nghia thi dinh nghia no ra
#define _LIGHT_BULB_H

class lightBulb
{
private:
    /* data */
    bool light;
public:
   void turnOn();
   void turnOff();
   bool isOn();
   void show();
};

#endif