#include <iostream>


int main()
{
    int a;
    int *pointer_1;
    int **pointer_2;

    a = 2;
    
    pointer_1 = &a;

    pointer_2 = &pointer_1;

    std::cout << "a : " << a << std::endl;
    std::cout << "pointer_1 : " << *pointer_1 << std::endl;
    std::cout << "pointer_2 : " << **pointer_2 << std::endl;

    return 0 ;
}