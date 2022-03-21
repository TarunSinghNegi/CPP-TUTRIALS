#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 4, b=456, c= 2345;
    int k;
    cout<<"THE VALUE OF a is :"<<a<<endl;
    cout<<"THE VALUE OF b is :"<<b<<endl;
    cout<<"THE VALUE OF c is :"<<c<<endl;
    //USING SETW IN THIS //
    cout<<"THE VALUE OF a is :"<<setw(4)<<a<<endl;
    cout<<"THE VALUE OF b is :"<<setw(4)<<b<<endl;
    cout<<"THE VALUE OF c is :"<<setw(4)<<c<<endl;
    cin>>k;
    cout<<k;
    return 0;

}
