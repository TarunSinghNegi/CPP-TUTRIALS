#include<iostream>
using namespace std;
class complex{
    int a ;
    int b ;

    public :
    
        void setdata( int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        void addcomplex(complex c1, complex c2, complex c3)
        {
            a = c1.a + c2.a + c3.a;
            b = c1.b + c2.b + c3.a;
        }
        void answer()
        {
            cout<<a<<"  +  "<<  b<<"i"<<endl;
        }
    


};
int main()
{  complex c1 , c2 , c3, c4 ;
   c1.setdata(3, 2);
   c1.answer();
   
   c2.setdata(4, 2);
   c2.answer();

   c3.setdata(5, 2);
   c3.answer();

   c4.addcomplex(c1,c2, c3);
   c4.answer();

   return 0 ;
}