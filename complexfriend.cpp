#include<iostream>
using namespace std;
class Y;
class X 
{
    int num1;
    friend void exchange(X & t, Y & u);
    public :
    void indata(int a)
    {
        num1 = a;
    }
    void display()
    {
        cout<<"THE VALUE OF NUM1 IS "<<num1<<endl;
    }

};
class Y 
{
    int num2;
    friend void exchange(X & t, Y & u);
    public :
    void indata(int b)
    {
        num2 = b;
    }
    void display()
    {
        cout<<"THE VALUE OF NUM2 IS "<<num2<<endl;
    }

};
void exchange(X & t, Y & u)
{
    int temp;
    temp = t.num1;
    t.num1 = u.num2;
    u.num2 = temp;
    
}
int main()
{
    X o1;
    Y o2;

    o1.indata(34);
    o1.display();

    o2.indata(67);
    o2.display();

    exchange(o1, o2);

    cout<<"AFTER EXCHANGE OPERATION ";
    o1.display();
    cout<<"AFTER EXCHANGE OPERATION ";
    o2.display();
return 0 ;
}
//IF WE WANT TO GIVE ACCESS TO A LARGE AMOUNT OF FUNCTION THEN WE CAN ALSO GIVE ACCESS TO A CLASS THEN ITS ALL FUNCTION ACCESS ALL PRIVATE THINGS OF IT//