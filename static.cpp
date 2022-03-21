#include <iostream>
using namespace std;
class employee
{
    int id;
static int count ; //WITHOUT STATIC WE WILL NOT GET DIFFERENT COUNT FOR DIFFERENT OBJECT//

public:
    void takedata(void)
    {
        cout << "ENTER THE ID NUMBER OF EMPLOYE NUMBER "<<endl;
        cin >> id;
        count++;
    }
    void showdata(void)
    {
        cout <<"THE ID OF EMPLOYEE NUMBER "<<count<<" IS "<<id<<endl;
    }
     void static getcount(void)
    {
        cout<<"THE VALUE OF COUNT IS "<<count<<endl;
    }

};
int employee::count;//THIS ALSO PLAY A MAJOR ROLE IN IT//
int main()
{
    employee tarun, kanha , karu;
    tarun.takedata();
    tarun.showdata();
    employee::getcount();//this also for getting count for different objects//
   //tarun.getcount();//THIS WILL NOT WORK IN POWERSHELL//

    kanha.takedata();
    kanha.showdata();
    employee::getcount();
   // kanha.getcount();//THIS WILL NOT WORK IN POWERSHELL//

    karu.takedata();
    karu.showdata();
    employee::getcount();
   // karu.getcount();//THIS WILL NOT WORK IN POWERSHELL//
    

    return 0;
}
