#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
      // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
  /*  vector<int> v1;
    int element,count ;
    cout<<"enter the number of element of your vector"<<endl;
    cin>>count;
   
    for(int i = 0; i<count ; i++)
    {
        cout<<"ENTER THE "<<i<<" ELEMENT TO ADD TO THIS VECTOR"<<endl;
        cin>>element;
        v1.push_back(element);
        
    }
     display(v1);
     vector<int> :: iterator itr = v1.begin(); //iterator makes here//
   // v1.pop_back();
    //v1.insert(itr, 34);
    //display(v1);
    v1.erase(itr+1);//itr = 0th element//
   // v1.erase(itr, itr+2);//itr +1 erase first to the element it goes element of the array//
   // display(v1);     */
    vector<char> v2(4);//has the size of 4 integer//
 vector<char> :: iterator itr = v2.begin(); //iterator makes here//
    v2.insert( itr,4, '4');
    display(v2);

return 0 ;
}