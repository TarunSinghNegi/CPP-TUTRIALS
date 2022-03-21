#include<iostream>
using namespace std;
class base
{
    int data1;
    public :
    int data2;
    void setdata();
    int getdata1();
    //int getdata2();

};

 void base ::  setdata()
 {
   data1 = 65;
   data2 = 45;
 }

 int base :: getdata1()
 {
     return data1;
 }
/*
 int base :: getdata2()
 {
     return data2;
 }*/

   class derived : public base
  {
      int data3;
      public :
      void process();
      void display();

  };

   void  derived ::  process()
  { 
      data3 = getdata1() * data2 ; 
  }

  void derived :: display()
  {   
      cout<<getdata1()<<endl;
      cout<<data2<<endl;
      cout<<data3<<endl;
  }
int main()
{  derived o1;
   o1.setdata();
   o1.getdata1();
   //o1.getdata2();
   o1.process();
   o1.display();

return 0 ;
}