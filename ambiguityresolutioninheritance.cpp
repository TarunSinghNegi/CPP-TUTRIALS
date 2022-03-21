#include<iostream>
using namespace std;
class english
{ 
    public :
    void greet()
    {
        cout<<"GOOD MORNING"<<endl;
    }
};


class hindi
{
    public :
    void greet()
    {
        cout<<"SUPRABHAT"<<endl;
    }
};


class derived : public english , public hindi
{ 
     int a;
     public :
  void greet()
  {
      english :: greet();
  }
};
int main()
{ 
    english e;
    e.greet();
    hindi h;
    h.greet();
    derived d;
    d.greet();


return 0 ;
}