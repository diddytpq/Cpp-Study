#include <iostream>

int main()
{
    // int arr[3] = {1,2,3};

    // int *arr_pointer;

    // arr_pointer = arr; //arr_pointer = &arr[0];

    // std::cout << arr[0] << std::endl;
    // std::cout << *arr_pointer << std::endl;



    int arr[2][3] = {{1,2,3}, {4,5,6}};

    int (*pointer)[3];

    pointer = arr;
    std::cout << arr[1][1] << std::endl;
    std::cout << *pointer[1] +1 << std::endl;

    std::cout << arr[1][2] << std::endl;
    std::cout << *pointer[1] + 2 << std::endl;

    std::cout << "----------------------------" << std::endl;


    for (int i = 0; i < 3; i++)
    {
        std::cout << *(pointer[1] + i) << std::endl;
    }
}