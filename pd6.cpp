#include<iostream>
#include<windows.h>
using namespace std;
void printa();
void printw();
void printi();
void prints();

void gotoxy (int x,int y); 

main() 
{
 system ("cls");
  printa();
 cout <<endl;
  printw();
 cout <<endl;
 printa();
 cout <<endl;
 printi();
 cout <<endl;
  prints();
 
}
 void printa()
{ 
 cout << "  #   " <<endl;
 cout << " ###    " <<endl;
 cout << "#   #     " <<endl;
}
  void printw()
{
 cout << "#      #" <<endl;
 cout << "#  ##  #" <<endl;
 cout << " ##  ##" <<endl;
}
  void printi()
{
 cout << "#####   " <<endl;
 cout << "  #  " <<endl;
 cout << "  #  " <<endl;
 cout << "#####   " <<endl;
}
  void prints()
{
 cout << "####    " <<endl;
 cout << "#    " <<endl;
 cout << "####    " <<endl;
  cout <<"   #    " <<endl;
cout <<  "####    " <<endl;
}
  void gotoxy(int x , int y )
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


