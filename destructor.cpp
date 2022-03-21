#include<iostream>
using namespace std;
int count =0;
class num
{
    
    public :
    num()
    {
        count++;
        cout<<"THIS IS THE TIME WHEN CONSTRUCTOR IS INVOKED"<<endl;
    }
    ~num()
    {
      cout<<"this is the time when distructor is invoked "<<endl;
      count--;
    }
};
int main()
{
    cout<<"EVERYTHING STARTED HERE"<<endl;
    cout<<"creating first object n1"<<endl;

    num n1;
    {
        cout<<"entering the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout <<"exiting the block";
    }

    cout<<"back to main"<<endl;
    

return 0 ;
}