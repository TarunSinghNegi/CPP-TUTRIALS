#include<iostream>
using namespace std;
int fib(int a)
{
    if(a<2)
    {
        return 1;
    }
    else{
    return fib(a-2)+fib(a-1);
    }
}
int main()
{
    int a;
    cout<<"ENTER THE POSITION NUMBER "<<endl;
    cin>>a;
    cout<<fib(a);
}