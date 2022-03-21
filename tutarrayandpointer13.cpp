#include<iostream>
using namespace std;
int main ()
{
    int array[4] = {3, 5, 6, 34};
    //int* p  = array;
   // cout<<*(p++)<<endl;
   // cout<<*p<<endl;
    //cout<<*(++p)<<endl;

    
   /* cout<<"THE VALUE AT ARRAY[0] is "<<*p<<endl;
    cout<<"THE VALUE AT ARRAY[1] is "<<*(p+1)<<endl;
    cout<<"THE VALUE AT ARRAY[0] is "<<(*p+2)<<endl;
    cout<<"THE ADDRESS OF ARRAY0 is "<<&array<<endl;
    cout<<"THE ADDRESS OF ARRAY0 is "<<&array[0]<<endl;//&array = &array[0]
    cout<<"THE ADDRESS OF ARRAY1 is "<<&array[1]<<endl;
    cout<<"THE ADDRESS OF ARRAY2 is "<<&array[2]<<endl;*/
            //using do while and while loop //
        int i= 0;    
   /* while(  i < 4)
    {
      cout<<"the value at array "<<i<<" is "<< array[i]<<endl;
      i++;
    }*/
    do
    {
        cout<<"the value at array "<<i<<" is "<< array[i]<<endl;
        i++;
    } while (i<4);
    
    return 0;
}