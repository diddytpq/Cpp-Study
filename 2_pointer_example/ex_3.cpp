#include <iostream>

int main()
{
    int num_1 = 1;
    int *pointer ;
    
    pointer= &num_1;

    std::cout << "pointer : " << *pointer << std::endl;
    std::cout << "pointer + 1 : " << *pointer + 1 << std::endl;
    
}