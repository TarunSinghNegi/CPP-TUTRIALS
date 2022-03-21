#include<iostream>
using namespace std;
class Y;
class X
{
    int num1;
    friend  void add(X o1, Y o2);
    public :
    
        void setdata(int a)
        {
            num1 = a;
        }

};
class Y
{
    int num2;
    friend void add(X o1, Y o2);
    public :
    
        void setdata(int b)
        {
            num2 = b;
        }

    
};
void add(X o1, Y o2) 
{
    cout<<"the sum of class X and Y  "<<o1.num1 + o2.num2<<endl;

    
}
int main(){
    X m;
    m.setdata(45);

    Y n;
    n.setdata(34);

    add(m,n);

return 0 ;
}