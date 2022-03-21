#include<iostream>
using namespace std;
class Employee
{
    public :
    int id;
    int salary;
     Employee(int x)
    {
       id = x;
       salary = 54;
    }

    void print()
    {
        cout<<salary<<endl;
    }
    Employee(){}
};
/*1.DEFAULT VISIBILTY MODE IS PRIVATE .
2.PUBLIC VISIBILTY :: MAKES PUBLIC OF THE BASE CLASS AS PUBLIC OF THE  DERIVED CLASS.
PRIVATE VISIBILTY :: MAKES PUBLIC OF BASE CLASS AS PRIVATE OF THE DERIVED CLASS.
4.PRIVATE MEMBERS ARE NEVER INHERITED.*/

//FORMING A PROGRAMMING CLASS  INHERITED FROM BASE CLASS EMPLOYEE//
class Programmer : public Employee
{
    public :
    char languagecode;
     Programmer(int x)
    {
         id = x;
        languagecode = 'c';
    }

};
int main()
{
    Employee tarun(1), varun(2);
    cout<<tarun.salary<<endl;
    tarun.print();

    Programmer coderbaba(10);
   cout<<coderbaba.languagecode<<endl;
   cout<<coderbaba.id<<endl;

return 0 ;
}