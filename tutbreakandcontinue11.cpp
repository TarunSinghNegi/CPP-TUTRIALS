#include<iostream>
using namespace std;
int main()
{
    int i= 0;
   /* while(i<=40)
    {
        if(i == 7)
        {
            break;
        }
       cout<<i<<endl;
       i++;
    }*/
    

    for (int i = 0; i < 40; i++)
    
    {
        if(i == 7)
        {
            continue;
        }
       cout<<i<<endl;
       
    }
    return 0;
}