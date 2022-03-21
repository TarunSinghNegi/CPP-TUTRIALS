#include<iostream>
using namespace std;
class base 
{   
    public :
    int var_base;
    void display()
    {
        cout<<"the value of var_base is :"<<var_base<<endl;
    }
};


class derived : public base
{
   public :
   int var_derived;
   void display()
   {
       cout<<"the value of var_base is :"<<var_base<<endl;
       cout<<"the value of var_derived is :"<<var_derived<<endl;
   }
};
int main()
{  base *base_pointer ;//here is the pointer of base so it follow only base class and show output of base class only//
   base obj_base;
   derived obj_derived;
  base_pointer = & obj_derived;
  base_pointer->var_base= 43; 
  base_pointer->display();

  derived *derived_pointer ;//this ids pointer of derived so it work like it//
  //derived_pointer = &obj_base;//this will not work//
  derived_pointer = &obj_derived;
  derived_pointer->var_base = 23;
  derived_pointer->var_derived = 3;
  derived_pointer->display();



return 0 ;
}