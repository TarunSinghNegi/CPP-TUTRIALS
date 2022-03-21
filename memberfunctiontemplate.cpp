#include<iostream>
using namespace std;
/*template<class T>
class tarun
{
    public :
     T data;
    tarun(T d)
    {
        data = d;
    }

    void display();
    

};
template<class T>
void tarun<T> :: display()
    {
        cout<<"the value of data is :"<<data<<endl;
    }*/

    //MAKING FUNCTION OUTSIDE THE CLASS //
   
    void func(int a)
    {
        cout<<"THE FUNC PROVIDE VALUE IS :"<<a<<endl;
    }

    template<class T>
    void func(T a)
    {
       cout<<"THE FUNC1 VALUE IS :"<<a<<endl;
    }
int main()
{
   /* tarun<char> o('w');
    cout<<o.data<<endl;
    o.display();*/

    func(9);    //HIGH PRIORITY TO THAT FUNCTION WHICH IS MORE SIMILAR//

return 0 ;
}