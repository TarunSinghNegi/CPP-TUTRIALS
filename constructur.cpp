#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public :
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked = call whenever an object is created
    
    complex(void);//this is we defining constructur//
    void print(void)
    {
        cout<<a<<"  +  "<<b<<"i"<<endl;

    }

};
complex :: complex(void)//--->this is default constructur it takes no parameters//
{
    a = 0;
    b = 0;
    cout<<"hello world"<<endl;
}
int main()
{
    complex c1,c2;

    c1.print();

    c2.print();

return 0 ;
}