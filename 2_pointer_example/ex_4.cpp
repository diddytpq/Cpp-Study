#include <iostream>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *arr_pointer;

    arr_pointer = &arr[0];

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << &arr[i] << std::endl;
    //     std::cout << arr_pointer + i << std::endl;
    // }

    int arr_2[3][3] = {1,2,3,4,5,6,7,8,9};
    int *arr_pointer_2[3];

    arr_pointer_2[2] = &arr_2[0][2];

    std::cout << arr_2[0][2] << std::endl;
    std::cout << **(arr_pointer_2) << std::endl;
}