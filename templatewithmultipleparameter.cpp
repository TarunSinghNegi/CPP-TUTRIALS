#include<iostream>
using namespace std;

template<class T1, class T2 , class T3 >
class password_maker
{
    public :
    T1 data1;
    T2 data2;
    T3 data3;
     
     password_maker(T1 a, T2 b, T3 c)
     {
         data1 = a;
         data2 = b;
         data3 = c;

     }

     void display()
     {
         cout<<this->data1<<data2<<data3<<endl;
     }
};
int main()
{  
    password_maker<int, string , int> obj(26 ,"tarun",2003);
    obj.display();
 
   


return 0 ;
}