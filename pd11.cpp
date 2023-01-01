#include<iostream>
#include<windows.h>
using namespace std;
void chllan(int speed);
main ()
{
 int speed ;
 cout << "enter speed (in km/h) : ";
 cin >>speed;
 chllan (speed);
}
 void chllan (int speed)
 {
  if (speed <= 100)
    {
     cout << " Perfect ! you are going good ";
     }
  if (speed > 100 )
    {
     cout << " Halt....YOU WILL BE CHALLANGED !!!!" ;
    }
  } 