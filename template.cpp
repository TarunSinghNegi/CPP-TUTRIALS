/*#include<iostream>
using namespace std;

class vector
{   public :
    int *arr;
    int size;
    public :
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
//vector is now representing datatyppe and a class //
    vector dotproduct(vector &v )//here address is necessary//
    {
        int d= 0;
        for(int i=0; i<size; i++)
        {
           d += this->arr[i]*v.arr[i];

        }
        return d;
    }

};
int main()
{
    vector v1(2);
    v1.arr[0] = 2;
    v1.arr[1] = 3;
    
    vector v2(2);
    v2.arr[0] = 3;
    v2.arr[1] = 4;

    int a = v1.dotproduct(v2);
    cout<<a<<endl;



return 0 ;
}*/

                     //NOW USING TEMPLATE //

#include<iostream>
using namespace std;

template<class T>
class vector
{   
    public :
    T *arr;
    int size;
    public :
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
//vector is now representing datatype and a class //
    T dotproduct(vector &v )//here address is necessary//
    {
        T d= 0;
        for(int i=0; i<size; i++)
        {
           d += this->arr[i] * v.arr[i];

        }
        return d;
    }

};
int main()
{
    vector<float> v1(2);
    v1.arr[0] = 2.4;
    v1.arr[1] = 3.2;
    
    vector<float> v2(2);
    v2.arr[0] = 3.3;
    v2.arr[1] = 4.5;

    float a = v1.dotproduct(v2);
    cout<<a<<endl;



return 0 ;
}