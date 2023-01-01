#include<iostream>
#include<windows.h>
using namespace std;
void ticket (int price ,string name );
main ()
 { 
  int prize;
  string name;
  while (true) 
  {
  cout << "enter price of ticket : ";
  cin >> prize;
  cout <<"enter country name : ";
  cin >> name;
  ticket (prize , name );
  }
 }
void ticket (int price ,string name )
  { 
    if ( name == "pakistan" )
    {
     float discount;
     float cost ;
     discount = price * (5.0/100.0) ;
     cost = price - discount ;
     cout << "your discounted price : " << cost<<endl;
    }
   if ( name == "canada" )
    {
     float discount;
     float cost ;
     discount = price * (45.0/100.0) ;
     cost = price - discount ;
     cout << "your discounted price : " << cost<<endl;
    }
    if ( name == "ireland" )
    {
     float discount;
     float cost ;
     discount = price * (10.0/100.0) ;
     cost = price - discount ;
     cout << "your discounted price : " << cost<<endl;
    }
    if ( name == "india" )
    {
     float discount;
     float cost ;
     discount = price * (20.0/100.0) ;
     cost = price - discount ;
     cout << "your discounted price : " << cost<<endl;
    }
    if ( name == "england" )
    {
     float discount;
     float cost ;
     discount = price * (30.0/100.0) ;
     cost = price - discount ;
     cout << "your discounted price : " << cost<<endl;
    }
     }
     
   
 
         


