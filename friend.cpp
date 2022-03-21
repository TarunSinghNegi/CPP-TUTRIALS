#include<iostream>
using namespace std;
class complex
{
    int a;
    int b; 
    public :
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout<<"THE COMPLEX NUMBER IS  "<<a<<" + "<<b<<"i"<<endl;
    }
     friend  complex  sumupcomplex(complex c1 , complex c2);

};
complex sumupcomplex(complex c1, complex c2)
{
    complex  c3;
    c3.setdata((c1.a + c2.a) , (c1.b + c2.b));
    return c3;
}
int main(){
    complex c1,c2 , sum;
    c1.setdata(3,4);
    c1.print();

    c2.setdata(4,4);
    c2.print();

    sum = sumupcomplex(c1,c2);
    sum.print();

return 0 ;
}
/* 1. its is like giving file referene in public then solving in outside it just in a different manner 
2. also you have to make a new object of it main function .
3 . then print it 
        now some point bty cwh
        1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.*/