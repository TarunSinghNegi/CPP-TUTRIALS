#include <iostream>
using namespace std;
class base1
{
protected:
    int base1;

public:
    void set_base1(int b1)
    {
        base1 = b1;
    }
};

class base2
{
protected:
    int base2;

public:
    void set_base2(int b2)
    {
        base2 = b2;
    }
};

class base3
{
protected:
    int base3;

public:
    void set_base3(int b3)
    {
        base3 = b3;
    }
};

class derived : public base1, public base2, public base3
{
protected:
    int sum;

public:
    void display()
    {
        cout << "THE VALUE OF B1 IS :" << base1 << endl;
        cout << "THE VALUE OF B2 IS :" << base2 << endl;
        cout << "THE VALUE OF B3 IS :" << base3 << endl;
        cout << "THE SUM OF B1 , B2 AND B3 IS :" << base1 + base2 + base3 << endl;
    }
};

int main()
{
    derived pukara;
    pukara.set_base1(23);
    pukara.set_base2(34);
    pukara.set_base3(12);
    pukara.display();

    return 0;
}