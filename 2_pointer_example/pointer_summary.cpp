#include<iostream>

using namespace std;

// ex_1 포인터의 기본
// int main()
// {
//     int *p; // int형 자료의 데이터 주소 값을 저장하는 데이터의 형
//     int num = 3;

//     p = &num;

//     cout << "p : " << p<< endl; //포인터가 가르키는 데이터의 주소 값 == &num
//     cout << "*p : " << *p<< endl; //포인터가 가르키는 데이터 값 ==num
//     cout << "&p : " << &p<< endl; //포인터 본인의 주소값

//     return 0;
// }

//  ex_2 const 상수 포인터 정리

// int main()
// {
//     const int num = 3;
//     const int* p;

//     p = &num;

//     cout << "p : " << p<< endl; //포인터가 가르키는 데이터의 주소 값 == &num
//     cout << "*p : " << *p<< endl; //포인터가 가르키는 데이터 값 ==num
//     cout << "&p : " << &p<< endl; //포인터 본인의 주소값

//     return 0;
// }

// int main()
// {
//     int a = 3;
//     int *const p = &a;

//     *p = 5;

//     cout << "p : " << p<< endl; //포인터가 가르키는 데이터의 주소 값 == &num
//     cout << "*p : " << *p<< endl; //포인터가 가르키는 데이터 값 ==num
//     cout << "&p : " << &p<< endl; //포인터 본인의 주소값

//     return 0;
// }


//  ex_3 포인터 대입

// int main()
// {
//     int num_1;
//     int *p_1 = &num_1;
//     int *p_2;

//     *p_1 = 3;
//     p_2 = p_1;

//     cout << "p_1 : " << p_1 << endl;
//     cout << "p_2 : " << p_2 << endl;

//     num_1 = 5;

//     cout << "p_1 : " << *p_1 << endl;
//     cout << "p_2 : " << *p_2 << endl;

// }

//  ex_4 포인터 배열

// int main()
// {
//     int arr[5] = {1,2,3,4,5};

//     for (int i =0; i<5; i++)
//     {
//         cout << "arr["<<i<<"]의 주소값" << &arr[i]<< endl; //int형 배열임으로 4byte씩 차이한다.
//     }
//     cout << "----------------------" << endl;

//     int *parr = &arr[0];

//     for (int j = 0; j<5; j++)
//     {
//         cout << "parr["<<j<<"]의 주소값" << parr + j<< endl;
//     }

// }

// int main()
// {
//     int arr[2][3] = {{1,2,3},{4,5,6}};
//     int (*parr)[3]; // 포인터 변수 parr은, int형 3개의 열의 개수를 가진 2차원 배열을 가르킨다.

//     parr = arr;

//     cout << "arr[1][0] = "<< arr[1][0] << endl;
//     cout << "parr[1][0] = "<< parr[1][0] << endl;

//     cout << "arr[1][0] = "<< &arr[1][0] << endl;
//     cout << "parr[1][0] = "<< (parr + 1) << endl;


// }


//  ex_5 포인터를 활용한 함수

// void change_int(int *p)
// {
//     *p = 100;
// }

// int main()
// {
//     int num = 0;
//     int *p = &num;

//     cout << *p << endl;

//     change_int(p);

//     cout << *p << endl;

// }