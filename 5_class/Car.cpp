#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::init_car(const char *ID, int fuel)
{
    strcpy(gamerID, ID);
    fuel_gauge = fuel;
    cur_speed = 0;
}

void Car::show_stat()
{
    cout << gamerID << endl;
    cout << fuel_gauge << endl;
    cout << cur_speed << endl;
}

void Car::car_accel()
{
    if(fuel_gauge > 0)
    {
        cur_speed += 10;
        fuel_gauge -= 5;
    }
    return;

}
void Car::car_break()
{
    if(cur_speed>0)
    {
        cur_speed -= 10;
    }
    return;
}
