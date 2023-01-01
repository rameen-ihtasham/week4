#include <iostream>
using namespace std;
void calculatebill(string day ,int amount );
main ()
 {
  int amount ;
  string day ;
  while (true )
  {
  cout << " enter you bill :";
  cin >> amount;
  cout << " enter day : ";
  cin >> day ;
  calculatebill (day ,amount );
  }
 }
 void calculatebill (string day ,int amount )
 {
  if (day != "sunday")
  { 
   cout << "your bill : "<<amount<<endl;
  }
  if (day == "sunday") 
  {
   float bill;
   float discount;
   discount = amount *(10.0/100.0);
   bill = amount - discount ;
   cout << "your bill : "<<bill <<endl;
  }
 }