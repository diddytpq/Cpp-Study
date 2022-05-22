#ifndef __CAR_H__

#define __CAR_H__
#include <cstring>

class Car
{
    char gamerID[20];
    int fuel_gauge;
    int cur_speed;

    public:

    void init_car(const char *ID, int fuel);
    void show_stat();
    void car_accel();
    void car_break();
};



#endif