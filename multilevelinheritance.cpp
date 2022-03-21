#include<iostream>
using namespace std;
class student 
{
    protected :
    int roll_number;

    public :
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
    roll_number = r ;
}

void student :: get_roll_number()
{
    cout<<"the roll number of the student is: "<<roll_number<<endl;;
}



class Exam : public student
{ 
  protected:
  float maths_marks;
  float physics_marks;
  public :
  
  void set_marks(float , float);
  void get_marks(void);
};

void Exam :: set_marks(float m , float p)
{
  maths_marks = m ;
  physics_marks = p ;
}

void Exam :: get_marks()
{
    cout<<"marks obtained in maths are: "<<maths_marks<<endl;
    cout<<"marks obtained in physics are: "<<physics_marks<<endl;
}


class result : public Exam 
{
    public :
    void display_result()
    {
        get_marks();
        get_roll_number();
        cout<<"the percentage of the student : "<<(maths_marks+physics_marks)/2<<endl;
    }

};
int main()
{
    result tarun;
    tarun.set_roll_number(33);
    tarun.set_marks(88.0 , 77.0);
    tarun.display_result();

return 0 ;
}