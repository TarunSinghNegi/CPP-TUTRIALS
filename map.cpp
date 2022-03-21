#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["tarun"] = 45;
    marksmap["arun"] = 458;
    marksmap["varun"] = 4;
    marksmap["karun"] = 5;
    marksmap.insert({"jojo", 54});
    map<string, int> :: iterator iter;

    for(iter = marksmap.begin(); iter != marksmap.end(); iter++) 
    {
        cout<<"NAME : "<<(*iter).first<<"|"<<"MARKS : "<<(*iter).second<<endl;
    }

    marksmap.empty();


return 0 ;
}