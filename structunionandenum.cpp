#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char car;
    float sellary;
};
 int main()
{
    struct employee harry;
    harry.eid = 34;
    harry.car = 'b';
    harry.sellary = 1299494;
    cout<<harry.eid<<endl;
    cout<<harry.car<<endl;
   /* enum games {cricket, VOLLEYBALL , jodo};
    games g1 = jodo ;
    cout<<g1<<endl;
    cout<<(g1==1);*/

    return 0;
}