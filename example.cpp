#include<iostream>
using namespace std ;
void add (int number1, int number2);
void product (int number1,int number2);
main()
{
  int number1;
  int number2;
  cin >> number1;
  cin >>number2;
  add (number1 , number2);
  product (number1 , number2);
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
 