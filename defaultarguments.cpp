#include<iostream>
using namespace std;
class simple
{
    int x ,y, z;
    public:
    simple(int a=3, int b=7, int c=5)
    {
      x = a;
      y = b;
      z = c;
    }
    void display();
};
 void simple :: display()
 {
   cout<<"the data 1, data 2 and data 3 is "<<x<<","<<y<<","<<z<<endl;
 }
int main()
{
    simple s1(4);
    s1.display();

return 0 ;
}