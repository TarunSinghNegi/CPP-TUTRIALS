#include<iostream>
using namespace std;
int  pro(int a, int b) //inliie used for fast reaction //
{ 
    
   int static c = 0;//THIS WILL WORK ONLY ONE TIME//
    c = c + 2;//IT WORK IN EVERY STEP//
    return (a*b + c);
}
float bank(int basemoney, float interest= 1.04 )
{
    return basemoney*interest;
}

int main ()
{
    cout<<"THE ANSWER IS  "<<pro(3,5)<<endl;
    cout<<"THE ANSWER IS  "<<pro(3,5)<<endl;
    cout<<"THE ANSWER IS  "<<pro(3,5)<<endl;
    cout<<"THE ANSWER IS  "<<pro(3,5)<<endl;
    cout<<"ENTER THE BASE MONEY"<<endl;
    int basemoney;
    cin>>basemoney;
    
    cout<<"YOU WILL RECIEVE " << bank(basemoney)<<" THIS FROM BANK"<<endl;;
    cout<<"VIP GUY GET AMOUNT "<< bank(basemoney, 1.4) << " FROM BANK"<<endl;
    return 0;
    
}