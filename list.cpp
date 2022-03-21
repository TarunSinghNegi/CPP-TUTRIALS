#include<iostream>
#include<vector>
#include<list>
using namespace std;

void display (list<int> &lst)
{
    list<int> :: iterator iter2;
    for( iter2 = lst.begin(); iter2 != lst.end(); iter2++)
    {    
        
        cout<<*iter2<<" ";
    }
    cout<<endl;
}
int main()
{
 list<int> list1;//list with 0 length//
 list<int> :: iterator iter;
 iter = list1.begin();
  
  list1.insert(iter ,2,8);//insert can also use but it put only one value//
  list1.push_back(3);//for inserting elements//
  list1.push_back(4);
  list1.push_back(8);
  list1.push_back(7);
  display(list1);


  list<int> list2(4);//list with having house of 2 int data type//
  list<int> :: iterator itera;
  itera = list2.begin();
  *itera = 5;
  *itera++;
  *itera = 3;
  *itera++;
  *itera = 7;
  *itera++;
  *itera = 2;
  

  display(list2);
                   //NOW SOME LIST AWESOME THINGS//
  //REMOVING ELEMENTS FROM LAST AND FRONT//
  list2.pop_back();
  //AFTER USING pop_back()//
  display(list2);
  //AFTER USING pop_front()//
  list2.pop_front();
  display(list2);
  //USING REMOVE TO REMOVE ANY ELEMENT YOU WANT//
  list2.remove(7);
   display(list2);
   list1.swap(list2);
   display(list2);
   //merge to list using merge//
   list2.merge(list1);
   display(list2);
   //sort any list using sort//
   list2.sort();
   display(list2);
  
   
return 0 ;
}