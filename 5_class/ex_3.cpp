#include <iostream>

void print(int x) { std::cout << x << std::endl;}
void print(char x) { std::cout << x << std::endl;}
void print(double x) { std::cout << x << std::endl;}

class Date
{
    int year_;
    int month_;
    int day_;

    public:
    
    void show_date();

    Date() // set default year, month, day
    {
        year_ = 2022;
        month_ = 5;
        day_ = 11;
    }

    Date(int year, int month, int day) // set year, month, day
    {
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::show_date()
{
    std::cout << year_ << '.' << month_ << '.' << day_ << std::endl;
}


int main()
{   
    char a = 'a';
    print(3);
    print(a);
    print(13.1414);

    Date data;
    Date data_2(2022,5,12);
    data.show_date();
    data_2.show_date();
}