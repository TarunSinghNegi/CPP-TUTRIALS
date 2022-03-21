#include<iostream>
using namespace std;
int pro(int a, int b)
{
    return 4*5;
}
int pro(int a,int b,int c)
{
    return a*b*c;
}
//AREA OF RECTANGLE//
int area(int a,int b)
{
    return a*b;
}
//AREA OF CIRCLE //
float area(int r)
{
    return (3.14*r*r);
}
//AREA OF SQUARE //
int tarea(int a )
{
    return a*a;
}
int main()
{
    cout<<"THE PRODUCT OF 4 AND 5 IS  "<<pro(4,5)<<endl;
    cout<<"THE AREA OF RECTANGLE OF SIDE 2 AND 9 IS  "<<area(2,9)<<endl;
    cout<<"THE AREA OF CIRCLE OF RADIUS 9 IS  "<<area(9)<<endl;
    cout<<"THE AREA OF SQUARE OF SIDE 2  IS  "<<tarea(2)<<endl;
    cout<<"THE PRODUCT OF 4 , 5 AND 10 IS  "<<pro(4,5,10)<<endl;
}