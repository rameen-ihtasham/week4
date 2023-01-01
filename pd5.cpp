#include<iostream>
#include<windows.h>
using namespace std;
void printr();
void printr2();
void printr3();
void printr4();
void printr5();
void gotoxy (int x,int y); 

main() 
{
int x=15;
int y=15;
gotoxy (x,y);
printr();
gotoxy(x+1,y);
printr2;
gotoxy(x+1,y);
printr3;
gotoxy(x+1,y);
printr4;
gotoxy(x+1,y);
printr5;

}


  void gotoxy(int x , int y )
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printr()
{
 cout <<" #####     ##     ##     ## #### ##### ##    #  "<<endl;
}
void printr2()
{
 cout <<" #    #   #  #    # #   # # #    #     # #   #  "<<endl;
}
void printr3()
{ 
cout <<" #####   ######   #  # #  # ###  ####  #  #  #  "<<endl;
}
void printr4()
{ 
cout <<" #    # #      #  #   #   # #    #     #   # #  "<<endl;
}
void printr5()
{ 
cout <<" #     #        # #       # #### ####  #    ##  "<<endl;
}
