#include<iostream>
using namespace std;
class Company     //NOW THIS IS ABSTRACT CLASS WHICH IS JUST FORM TO MAKE NEW CLASSES//
{
    protected :
    string name;
    float rating ;

    public :
    Company(string s, float r)
    {
        name = s;
        rating = r;
    }
    virtual void display() = 0;   //THIS IS PURE VIRTUAL FUNCTION  ALSO ITS DO NOTHING 
                                  //AFTER MAKING VIRTUAL FUNCTION IT IS COMPULSARY TO MAKE 
};                                //NEW CLASSES WIT THE SAME FUNTION 


class product : public Company
{
    protected :
    float life ;
    public :
    product( string s, float r , float l ) : Company(s,r)
    {
         life = l;
    }

    void display()
    {
      cout<<"THE NAME OF THE PRODUCT IS :"<<name<<endl;
      cout<<"THE RATING OF THE PRODUCT IS :"<<rating<<endl;
      cout<<"THE LIFE OF THE PRODUCT IS :"<<life<<" YEARS"<<endl;
    }

};


class gas : public Company
{
    protected :
    int atomic_number;
    public :
    gas( string s, float r , int a ) : Company(s,r)
    {
         atomic_number= a;
    }

    void display()
    {
      cout<<"THE NAME OF THE GAS IS :"<<name<<endl;
      cout<<"THE RATING OF THE GAS IS :"<<rating<<endl;
      cout<<"THE ATOMIC NUMBER OF THE GAS IS :"<<atomic_number<<endl;
    }

};
int main()
{
    string name ;
    float rating , life;
    int atomic_number;

    //for class product//
    name = "LED";
    rating = 4.5;
    life = 5.0;
    product bulb(name , rating , life);
    bulb.display();
    //for class gas //
   // name = "argon";
    rating = 4.0;
    atomic_number  = 18;
    gas noble(name, rating , atomic_number);
   // noble.display();


   //for displaying things //
    Company * tut[2];
    tut[0] = &bulb;                                 //use pointers to show display//
    tut[1] = &noble;

    tut[0]->display();
    tut[1]->display(); 



return 0 ;
}
