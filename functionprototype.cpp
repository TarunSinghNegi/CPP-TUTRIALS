#include<iostream>
using namespace std;
int product (int a, int b)//we can also write int product(int, int)6787//
{//a nd b are formal parameters which will take up the value of num1 and num2//
    int p = a*b;
    return p;
}
void g()
{
    cout<<"YOUR WORK HAS DONE BY COMPUTER"<<endl;
}
int main()
{
    int num1,num2;
    cout<<"ENTER NUM1"<<endl;
    cin>>num1 ;

    cout<<"ENTER NUM2"<<endl;
    cin>>num2;
    cout<<"THE MULTIPLICATION OF NUM1 AND NUM2 IS  "<<product(num1 , num2)<<endl;
    //num1 num2 are actual parameters//
    g();
}