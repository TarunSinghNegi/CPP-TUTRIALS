#include<iostream>
using namespace std;
class test
{
    int a,b ;
    public :
   /* test(int i ,int j) : a(i), b(j)//this is the new way to enter the values in datatype//
    {                               //it will only work for constructor type not for anyone type//
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;

    }*/

    test(int i ,int j) : a(2*j), b(a)//b(2*i), a(b)//this will show the garbage value of a becauuse here the value of b firstly find but the 
    {                               //datatype a is iniated first so it will throw error.so we need to follow respectively here//
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;

    }
};
int main()
{
    test(2,3);

return 0 ;
}