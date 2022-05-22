#include <iostream>

using namespace std;

int& function(int &ref)
{
    ref ++;
    return ref;
}

int main()
{
    int num_1 = 1;
    int &num_2 = function(num_1);

    num_1 ++;
    num_2 ++;

    cout << num_1 << endl;
    cout << num_2 << endl;

}