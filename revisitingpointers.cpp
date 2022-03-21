#include<iostream>
using namespace std;
int main()
{
  int a = 40;
  int* ptr;
  ptr = &a;
  cout<<"the address of a is :"<<ptr<<endl;
  cout<<"the value of a is :"<<*ptr<<endl;

  //nava tarika//
  int* nayaptr;
  nayaptr = new int(3);
  cout<<"the dynamically allocated value is : "<<nayaptr<<endl;

   //NOW SOMETHING NEW HERE//
  int* arr = new int [4];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  delete arr;//this delete all the value in arrays and throws a garbage value//
  cout<<"the value arr[0] is :"<<arr[0]<<endl;
  cout<<"the value arr[1] is :"<<arr[1]<<endl;
  cout<<"the value arr[3] is :"<<arr[2]<<endl;
  cout<<"the value arr[4] is :"<<arr[3]<<endl;


return 0 ;
}