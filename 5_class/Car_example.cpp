#include "Car.h"

int main()
{
    Car car_1;
    
    car_1.init_car("my car", 100);

    car_1.show_stat();

    car_1.car_accel();

    car_1.show_stat();

    car_1.car_break();

    car_1.show_stat();

    return 0;
}