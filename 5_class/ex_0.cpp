#include <iostream>

class Point
{
    int pos_x, pos_y;

    public:

    Point(int x, int y)
    {
        pos_x = x;
        pos_y = y;
    }

    int get_x(){return pos_x;}
    int get_y(){return pos_y;}
};


class Point_Array
{
    Point *array[100];
    int array_num = 0;

    public:

    void set_point(Point &point);
};

void Point_Array::set_point(Point &point)
{
    array[array_num++] = new Point(point.get_x(), point.get_y());

    std::cout << array_num << ":" << array[array_num-1]->get_x() << "," << array[array_num-1]->get_y() << std::endl; 
}


int main()
{
    Point pos_1(1,2), pos_2(4,5);

    Point_Array distance;
    distance.set_point(pos_1);
    distance.set_point(pos_2);

}