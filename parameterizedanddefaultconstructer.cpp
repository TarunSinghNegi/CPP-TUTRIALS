#include<iostream>
#include<cmath>

using namespace std;
/*class complex
{
    int a,b;
    public :

    complex(int,int);
    void print()
    {
        cout<<a<<" +  "<<b<<"i"<<endl;
    }

};
complex :: complex(int x, int y)//--.this is paramertized constructur because it can take two parameteres from us//
{
    a = x;
    b = y;
}
int main()
{
     complex X(2,4);
     X.print();

     complex Y(4,56);
     Y.print();

return 0 ;
}*/

///////NOW DISTANCE CALCULATOR THROUGH THESE FUNCTION ////

class point
{
    int x, y , z;
    
    public :
     void points(int a  , int b ){
         x = a;
         y = b;
     }

     void one(int a)
     {
       z = a;
     }
        
    void print()
    {
        cout<<"the points are ("<<x<<","<<y<<")"<<endl;
    }
   // friend point distance(point Z);
    /*void printdistance()
   {
          cout<<"THE DISTANCE BETWEEN THE POINT X AND Y IS  "<<distance<<endl;
   }*/

    friend point distancefinder(point X , point Y );
    //friend point distance(point Z);
};
point distancefinder(point X, point Y)
{
    point Z;
    Z.points((X.x - Y.x)*(X.x - Y.x) , (X.y - Y.y)*(X.y - Y.y));

    return Z;
}
/*point distance(point Z)
{
    point sumo;
    sumo.one(Z.x + Z.y);
    return sumo;
}*/

 
int main()
{
    point X;
    X.points(3,4) ;
    X.print();

    point Y;
    Y.points(4,9);
    Y.print();
    

    point A;
    A = distancefinder( X,  Y);
    A.print();
    
     

    return 0;
}