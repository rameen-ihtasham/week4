#include<iostream>
using namespace std ;
void evenodd (int number );
main() 
{
 int number ;
 while (true )
 {
 cout << "enter number  : ";
 cin >> number ;
 evenodd( number );
 }
}
 void evenodd (int number) 
 { 
  if (number%2 == 0 )
   {
    cout << "EVEN NUMBER" ;
   }
  if (number%2 != 0) 
   {
    cout <<"ODD NUMBER ";
   }
 }