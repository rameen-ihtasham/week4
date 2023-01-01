#include<iostream>
#include<windows.h>
using namespace std;
void checker (int num1,int num2 );
main ()
 {
  int num1;
  int num2;
  cout <<"enter number 1 : ";
  cin >>num1;
  cout << "enter number 2 : ";
  cin >> num2;
  checker (num1 , num2);
 }
  void checker (int num1 ,int num2 )
 {
  if (num1==num2)
   { 
    cout << "true "<<endl;
   }
  if (num1 != num2)
   {
   cout << "false"<<endl;
   }
 }
  void gotoxy(int x , int y )
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


