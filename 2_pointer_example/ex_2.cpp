#include <iostream>


int main()
{
    int num_1 = 1;
    int num_2 = 2;
    const int* pointer = &num_1;

    pointer = &num_2;

    std::cout << "pointer : "<< *pointer << std::endl;
}