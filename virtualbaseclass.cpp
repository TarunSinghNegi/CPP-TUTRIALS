#include<iostream>
using namespace std;
class student 
{
    protected :
    int roll_number;
    public :
    void set_roll_number(int a)
    {
        roll_number = a;
    }

    void print_roll_number()
    {
        cout<<"THE ROLL NUMBER IS : "<<roll_number<<endl;
    }

};


class test : virtual public student 
{
    protected :
    float maths;
    float physics;
    public :
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }

    void print_marks()
    {
        cout<<"MATHS :"<<maths<<endl;
        cout<<"PHYSICS :"<<physics<<endl;
    }
};


class sports : virtual public student //thats virtual deal with the ambiguity problem
{
  protected :
  float PT_SCORE;
  public :
  void set_score(float a)
  {
      PT_SCORE = a;
  }

  void print_score()
  {
      cout<<"PT SCORE IS :"<<PT_SCORE<<endl;
  }
};

class result : public test, public sports 
{
    protected :
    float sum;
    public :
    void display()
    {
        print_roll_number();
        print_score();
        print_marks();
        sum = maths + physics + PT_SCORE;
        cout<<"the total sum is :"<<sum<<endl;

    }

};
int main()
{result tarun;
 tarun.set_roll_number(33);
 tarun.set_marks(88.0,77.45);
 tarun.set_score(99);
 tarun.display();


return 0 ;
}