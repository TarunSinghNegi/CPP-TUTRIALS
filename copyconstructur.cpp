#include<iostream>
using namespace std;
class number 
{
  int a;
  public :
  number(){
      a = 0;
  }
  number(int x)
  { 
      a = x;
  }

  number(number &obj)
  {
     cout<<"copy constructer invoked"<<endl;
     a = obj.a;
  }

  void print()
  {
      cout<<"the value is "<<a<<endl;
  }

};
int main()
{
    number alpha(2), beta, gamma(42) , zeta;
    alpha.print();
     beta.print();
    gamma.print();

     number omicron = gamma;//copy constructor is invoked//
    omicron.print();

    zeta.print(); //copy constructor is not invoked because its referenced earlier //

  number phai = gamma; //cpry constructor is invoked//
  phai.print();





    return 0 ;
}