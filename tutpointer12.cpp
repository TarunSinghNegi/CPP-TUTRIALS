#include<iostream>
using namespace std;
int main()
{
    int a = 45;
    int* b = &a;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<*b<<endl;

    //POINTER TO POINTER //
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value at b is "<<*c<<endl;
    cout<<"the value at a is"<<**c<<endl;

    return 0;
}