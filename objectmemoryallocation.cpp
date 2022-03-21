#include<iostream>
 using namespace std ; 
 class market
 {
     int serialno;
     int price;
     int counter;
     public:
     void initcounter (void){ counter = 0;}
     void setPrice(void);
     void display(void);

 };
 void market :: setPrice(void)
 {
   
    {
        cout<<"ENTER THE SERIAL NO. OF ITEM "<<counter + 1<<endl;
        cin>>serialno;
        cout<<"ENTER THE PRICE OF THE OBJECT"<<counter+1<<endl;
        cin>>price;
        counter++;

    }
   
 }
 void market :: display(void)
 {
     for(int i = 0; i<counter ; i++)
     {
         cout<<"THE PRICE OF ITEM OF SERIAL NO  "<<serialno<<" IS "<< price<<endl;
     }
 }

 int main()
{
  market shop;
  shop.initcounter();
  shop.setPrice();
  shop.setPrice();
  shop.display();
  
  


}
 