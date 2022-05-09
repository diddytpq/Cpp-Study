#include <iostream>


int change_num(int *p)
{
    *p = 3;

    return 0;
}

int main()
{
    int num = 5;

    std::cout << num << std::endl;

    change_num(&num);

    std::cout << num << std::endl;

    std::cout << "----------------------------------" << std::endl;

    int num_2 = 3;
    int &another_num_2= num_2;

    another_num_2 = 5;

    std::cout << num_2 << std::endl;
    std::cout << another_num_2 << std::endl;



    return 0;
}