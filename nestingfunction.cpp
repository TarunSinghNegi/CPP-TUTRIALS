#include <iostream>
using namespace std;
class binary
{
    //private :
    string s;

public:
    void lenge(void);
    void check(void);
    void ultenge(void);
    void show(void);
};
void binary ::lenge(void)
{
    cout << "ENTER THE BINARY NUMBER" << endl;
    cin >> s;
}
void binary ::check(void)
{
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << " ENTERED NUMBER IS NOT A BINARY " << endl;
            exit(0);
        }
    }
}
void binary ::ultenge(void)
{
    int i;

    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::show(void)
{
    int i;
    cout << " BINARY IS  " << endl;
    for (i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.lenge();
    b.check();
    b.show();
    b.ultenge();
    b.show();

    return 0;
}
/*
// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions*/
