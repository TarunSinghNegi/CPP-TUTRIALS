#include<iostream>
using namespace std;
class apps
{
private :
    int a, b, c ; 
    public :
    int d , e;
    void setData(int a1, int b1, int c1);//DECLARATION//
    void getData()
    {
        cout<<"THE VALUE OF a IS  "<<a<<endl;
        cout<<"THE VALUE OF b IS  "<<b<<endl;
        cout<<"THE VALUE OF c IS  "<<c<<endl;
        cout<<"THE VALUE OF d IS  "<<d<<endl;
        cout<<"THE VALUE OF e IS  "<<e<<endl;
    }
};
void apps :: setData(int a1, int b1, int c1)//HERE SHOWING//
{
   a=a1;
   b=b1;
   c=c1;
}
int main()
{
    apps netflix;
    //netfliix.a = 123;this will so error because a is private//
    netflix.d = 123;
    netflix.e = 23;
  netflix.setData(12,34,56);
  netflix.getData();

}
