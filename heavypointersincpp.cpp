#include<iostream>
using namespace std;
class A 
{  
      int a;
     public :
     void setdata(int a)
     {    //a = a;  this throw garbage value of a//
        this->a = a;//this will help//
     }

     A & newsetdata(int a)
     {
         this->a = a;
         return *this;
     }

     void getdata()
     {
         cout<<"the value of a is "<<a<<endl;
     }


};
int main()
{
    A obj;
    obj.setdata(5);
    obj.getdata();

    A obj1;
    obj1.newsetdata(6).getdata();

return 0 ;
}