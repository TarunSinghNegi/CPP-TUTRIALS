#include<iostream>
#include<functional>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {2,6,4,3,9,1};
    sort(arr+1 , arr+6);
    sort(arr, arr+6, greater<int>());
    for(int i = 0; i<6; i++)
    {
      cout<<arr[i]<<endl;
    }



return 0 ;
}