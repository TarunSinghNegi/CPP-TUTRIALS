#include<iostream>
using namespace std;
void swap(int a , int b)
{
    //THIS WILL NOT WORK//
   /* int temp;
    temp = a;
    a = b;
    b = temp;*/
}


    // CALL BY REFRENCE USING POINTER//
    void swappointer(int * a, int * b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }

    //CALL BY REFERENCE USING CPP REFERENCE//
    void swapreferencevar(int &a, int &b)
    {
        int temp;
        temp =  a;
         a = b;
         b = temp;
    }

   

int main()
{
    int x, y;
    cout<<"ENTER THE VALUE OF NUM1"<<endl;
    cin>>x;
    cout<<"ENTER THE VALUE OF NUM2"<<endl;
    cin>>y;
    cout<<"THE VALUE OF X IS  "<<x <<" THE VALUE OF Y IS  "<<y<<endl;
    swap (x,y);
    swappointer(&x , &y);
    swapreferencevar(x , y);

   /*this will not work bro
   //  tarun(&x, &y);
    cout<<"THE VALUE OF X IS  "<<x <<" THE VALUE OF Y IS  "<<y<<endl;*/
}


