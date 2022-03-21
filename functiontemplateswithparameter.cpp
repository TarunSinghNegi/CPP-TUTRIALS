#include<iostream>
using namespace std;

/*
float func(int a, float b)
{
    float avg = (a+b)/2.0;
    return avg;

}
int main()
{   float k;

    k =   func(2, 3.5677777777777777);
    cout<<"THE AVERAGE OF a and b is "<<k<<endl;


return 0 ;
}*/
//in above whole code we need to change datatype time to time as while we need to change between number and float//


template<class T1 , class T2>
float func(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;

}

template<class T>

void swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{   float k;

    k =   func(2, 4.45);
    cout<<"THE AVERAGE OF a and b is "<<k<<endl;
    int x = 9; int y = 5;
     swapp(x,y);
     cout<<x<<" "<<y<<endl;


return 0 ;
}