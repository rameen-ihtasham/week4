#include<iostream>
using namespace std ;
void add (int number1, int number2);
void product (int number1,int number2);
void subtract (int number1,int number2);
void division (int number1 ,int number2);
main()
{ 
  while (true) 
  {
  int number1;
  int number2;
  char operation;
  cout << "enter first number : ";
  cin >> number1;
  cout << "enter second number : ";
  cin >>number2;
  cout <<"enter operation (+,-,*,/) : ";
  cin >> operation ;
  if (operation  == '+')
     {
      add (number1,number2);
     }
  if (operation  == '-')
     {
      subtract (number1,number2);
     }
  if (operation  == '*')
     {
     product (number1,number2);
     }
  if (operation  == '/')
     {
     division (number1 ,number2);
     }
   }
}
 void add (int number1 , int number2)
{
  
  int sum ;
 
  sum = number1+number2;
  cout << "sum = " << sum << endl ;
}
 void product (int number1 ,int number2)
{ 
  
  int product;
  product = number1*number2;
  cout << "product = " << product <<endl;
}
  void subtract (int number1 ,int number2)
 { 
  int subtract ;
  subtract = number1-number2;
  cout << "subtraction = " <<subtract<<endl ;
 }
  void division (int number1, int number2)
  { 
   int division;
   division = number1/number2;
   cout << "division = " << division <<endl; 
   }