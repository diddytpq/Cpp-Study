#include <iostream>
#include <cstring>

using namespace std;

class Simple
{
    int num;

    public:
    
    Simple(int n) : num(n)
    {
        cout << "num : " << num << endl;
    }

    void show_data()
    {
        cout << "num : " << num << endl;
    }
    Simple * get_this_pointer()
    {
        return this;
    }
};

class Simple_this
{
    int num;

    public:
    
    void this_func(int num)
    {
        this -> num = 207; // class 내의 변수 num를 207로 변경
        num = 105; // 매개변수 num을 105로 변경
        
        cout << "this num : " << this -> num << endl;
        cout << "num : " << num << endl;

    }
};

int main()
{
    Simple sim(3);

    Simple *ptr_1 = sim.get_this_pointer(); // sim 객체의 주소값 저장
    cout << ptr_1 << endl;
    ptr_1 -> show_data();

    Simple_this sim_2;
    sim_2.this_func(3);

}