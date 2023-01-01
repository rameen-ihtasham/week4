#include<iostream>
using namespace std ;
void showresult(int marks);

main()
{
  int marks;
  while(true)
   {
    cout << " Enter marks : ";
    cin >> marks;
    showresult(marks);
   }
 
}
 void showresult(int marks)
 {
   if (marks > 50 )
    { 
     cout <<"Pass"<<endl;
    }
  if (marks < 50)
    { 
     cout <<"Fail"<<endl;
    }
  if (marks == 50 )
   { 
    cout << "improve "<<endl ;
   }
 }