#include <iostream>


int change_val(int &p)
{
    p = 3;

    return 0;
}

int main()
{
    int num_1 = 5;

    std::cout << num_1 << std::endl;

    change_val(num_1);

    std::cout << num_1 << std::endl;

}