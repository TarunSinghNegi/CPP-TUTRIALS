#include<iostream>
using namespace std;
int c = 44;//THIS IS GLOBAL C VALUE
int main()
{  // *****BUILT IN DATA TYPES*************//
   /* int a, b, c;
    cout<<"ENTER THE VALUE OF a "<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF b "<<endl;
    cin>>b;
    cout<<"THE VALUE OF c IS "<<a + b<<endl;
    cout<<"THE VALUE OF GLOBAL C IS  "<<::c<<endl;//:: THIS IS SCOPE RESOLUTION OPERATOR
*/





    //********float, DOUBLE ,LONG DOUBLE LITERALS************//
   /* float d = 45F; 
    long double e = 45.44L;
    cout<<"THE VALUE OF FLOAT d IS "<<d<<endl;
    cout<<"THE VALUE OF long double e IS "<<e<<endl;
    cout<<"the size of 45 is "<<sizeof(45.44)<<endl;*/

    //****************REFERENCE VARIABLE**********************//
    int x = 7;
    int & y = x;
    cout<<"THE VALUE OF x IS "<<x<<endl;
    cout<<"THE VALUE OF y IS "<<y<<endl;
    cout<<"THE VALUE OF y IS "<<&y<<endl;
    cout<<"THE VALUE OF y IS "<<&x<<endl;


      //TYPECASTING MEANS CHANGING ONE DATA TYPE TO OTHER**************//

      int a = 45;
      float b = 45.55;
      cout<<"THE VALUE OF a IS "<<float(a)<<endl<<"THE VALUE IF B IS "<<int(b);

    return 0;
}