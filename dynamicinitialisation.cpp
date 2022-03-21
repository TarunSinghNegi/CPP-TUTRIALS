#include <iostream>
using namespace std;
class depositbank
{
    int principalamount;
    int year;
    float rate;
    float Rate;
    float returnvalue;

public:
    depositbank(){}
    depositbank(int p, int y, int r);
    depositbank(int p, int y, float R);

    void display()
    {
        cout << "YOUR DEPOSITE AMOUNT " << principalamount << " AFTER " << year <<" YEAR "<< " became " << returnvalue << endl;
    }
};
depositbank ::depositbank(int p, int y, int r)
{
    principalamount = p;
    year = y;
    rate = float( r ) / 100;
    returnvalue = principalamount;
   for(int i = 0; i<y; i++)
   {
       returnvalue = returnvalue*(1+rate);
   }
   

}
depositbank ::depositbank(int p, int y, float R)
{
    principalamount = p;
    year = y;
    Rate = R;
    returnvalue = principalamount;
   for(int i = 0; i<y; i++)
   {
       returnvalue = returnvalue * (1+Rate);
   }
   
}
int main()
{  
     depositbank bd1, bd2;

    int p,y, r;
    float R;
    
    
    cout<<"ENTER THE VALUE OF p,y,r"<<endl;
    cin>>p>>y>>r;
    bd1 = depositbank(p,y,r);
    bd1.display();


    cout<<"ENTER THE VALUE OF p,y,R"<<endl;
    cin>>p>>y>>R;
    bd2 = depositbank(p,y,R);
    bd2.display();
    
    

    

    return 0;
}