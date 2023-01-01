#include<iostream>
#include<windows.h>
using namespace std;
void rest(int holidays);
main() 
 { 
  int holidays ;
  cout <<"enter the holidays per year : ";
  cin >> holidays;
  rest (holidays );
 }
void rest(int holidays)
{
 int workdays;
 int workplay; 
 int holidayplay;
 int totaltime;
 int difference ;
 workdays = 365-holidays;
 workplay = workdays*63;
 holidayplay = holidays *127;
 totaltime = workplay+holidayplay;
 if (totaltime <= 30000)
      {
        cout << "tom has slept well this year " ;
      }
 if (totaltime > 30000)
     { 
       cout << "tom hasn't slept well this year "<<endl;
       difference = totaltime-30000;
       cout << " these are ";
       cout << difference ;
       cout << " minutes more than the norm ";
     }
 }

 

      
