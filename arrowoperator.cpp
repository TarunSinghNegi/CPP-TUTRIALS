#include<iostream>
using namespace std;
class kaksha
{
    int a , b;
    public :
    void setdata(int x ,int y)
    {
        a = x;
        b = y;

    }

    void getdata()
    {
        cout<<"THE VALUE OF a is :"<<a<<endl;
        cout<<"THE VALUE OF b is :"<<b<<endl;

    }

};
int main()
{
   //   past use       |  present use               |  future use   
 kaksha tarun;         |  kaksha* ptr = new kaksha; |  kaksha* ptr = new kaksha[4]//it gives four pointers//
 kaksha.setdata(2, 6); |  *ptr.setdata(2,6);        |  ptr->setdata(2,6);
 kaksha.getdata();     |  *ptr.getdata();           |  ptr->getdata();

return 0 ;
}