#include <iostream>

int function()
{
    int a;

    a = 5;

    return a;
}

int& function(int &p)
{

    p = 5;

    return p;
}


int main()
{
    int arr[3] = {1,2,3};
    int (&ref_arr)[3] = arr;

    ref_arr[0] = 4;
    ref_arr[1] = 5;
    ref_arr[2] = 6;

    std::cout << ref_arr[0] <<std::endl;
    std::cout << ref_arr[1] <<std::endl;
    std::cout << ref_arr[2] <<std::endl;

    std::cout << "--------------------------------------" <<std::endl;

    int num_1 = 3;

    int num_2 = function(num_1);

    std::cout << num_1 <<std::endl;
    std::cout << num_2 <<std::endl;



    return 0;
}