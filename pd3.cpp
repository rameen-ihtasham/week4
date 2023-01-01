#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void movecharacter(int x, int y);
void gotoxy(int x,int y );
main() 
{
 system ("cls"); 
 printmaze();
 int x=3 ;
 int y=3;
 while (true)
 {
  movecharacter(x,y); 
  if(x<15)
  {
   x= x+1;
   }
  if (x==15)
  {
   gotoxy (x-1 ,y);
   cout << " ";
   x=3;
 }
}
}
 void printmaze()
 {
  cout << " ####################### "<<endl;
  cout << " #                     # "<<endl;
  cout << " #                     # "<<endl;
  cout << " #                     # "<<endl;
  cout << " #                     # "<<endl;
  cout << " ####################### "<<endl;
 }
  void gotoxy(int x , int y )
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void movecharacter(int x,int y )
 {
  gotoxy (x-1,y);
  cout << " " ;
  gotoxy ( x , y);
  cout << "p" ;
  Sleep (1000);
 }

