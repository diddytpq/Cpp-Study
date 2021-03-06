#include <iostream>
#include <cstring>
using namespace std;

class Car
{
    char gamerID[20];
    int fuel_gauge;
    int cur_speed;

    public:

    Car(char * ID, int fuel);

    void show_stat();
    void car_accel();
    void car_break();
};


Car::Car(char *ID, int fuel)
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
}
void Car::car_break()
{
    if(cur_speed>0)
    {
        cur_speed -= 10;
    }
}


int main()
{
    Car car_1("my car", 100);

    car_1.show_stat();

    car_1.car_accel();

    car_1.show_stat();

    car_1.car_break();

    car_1.show_stat();

}