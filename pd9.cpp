#include<iostream>
#include<windows.h>
using namespace std;
void reverse( string option);
main ()
 {
  string option ;
  cout << " enter (true/false) : ";
  cin >> option ;
  reverse (option);
 }
void reverse(string option)
 {
  if ( option == "true" )
   {
    cout << "false" ;
   }
  if (option == "false" )
   { 
    cout << "true " ;
   }
  }
 
         


