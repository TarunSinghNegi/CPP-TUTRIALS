#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    protected :
    int a,b;
    public :
    void get_number(int x, int y)
    {
      a = x;
      b = y;
    }

    
};


class scintificcalculator 
{
  protected :
  int degree;
  public :
  void trigovalues(int d)
  {
    degree = d;
  }

  void babu()
  {
    cout<<"Sin("<<degree<<")"<<" : "<<sin(degree)<<endl;
  }
};


class hybridcalculator : public simplecalculator , public scintificcalculator
{
  public :
    void display()
    {
    cout<<"THE SUM OF A AND B IS "<<a+b<<endl;
    cout<<"THE SUBTRACTION OF A FROM B IS "<<a-b<<endl;
    cout<<"THE MULTIPLICATION OF A AND B IS "<<a*b<<endl;
    cout<<"THE DIVISION  OF A AND B IS "<<a/b<<endl;
    }

};



int main()
{  hybridcalculator c;
   c.get_number(40,5);
   c.display();
   c.trigovalues(270);
   c.babu();
  
   

return 0 ;
}