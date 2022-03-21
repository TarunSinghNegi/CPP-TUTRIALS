#include<iostream>
using namespace std;
class election 
{
    string symbolofparty, nameofparty;
    public :

     void setdata(string a , string b)
      {
         symbolofparty = a;
         nameofparty   = b;  
      }

      void getdata()
      {
          cout<<"THE SYMBOL OF PARTY YOU ENTERED IS :"<<symbolofparty<<endl;
          cout<<"THE NAME OF PARTY YOU ENTERED IS  :"<<nameofparty<<endl;
          cout<<"YOU VOTED FOR MODI "<<endl;
      }
    
};
int main()
{  int numberofvoter = 2;
  election* ptr = new election[numberofvoter];
  election *ptrstamp  = ptr; 
  string x, y;

  for(int i = 0; i <numberofvoter; i++)
  {   cout<<"VOTER : "<<i+1<<endl;
      cout<<"ENTER THE SYMBOL AND NAME OF PARTY "<< endl;
      cin>>x>>y;
      ptr->setdata(x, y);
      ptr++;

  }

  for(int i = 0; i<numberofvoter; i++)
  {
      cout<<"VOTER "<< i+1 <<" VOTED FOR"<<endl;
      ptrstamp->getdata();
      ptrstamp++;
  }

  cout<<"         NUMBER OF VOTES FOR MODI IS : "<<numberofvoter<<endl; 

return 0 ;
}