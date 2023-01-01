#include<iostream>
#include<windows.h>
using namespace std;
void bill (int red ,int white ,int tulip);
main ()
 {
  int red;
  int white;
  int tulip;
  cout <<"enter number of red roses : ";
  cin>>red;
  cout <<"enter number of white roses : ";
  cin>>white;
  cout <<"enter number of tulip roses : ";
  cin>>tulip;
  bill(red,white,tulip);
 }
void bill (int red ,int white ,int tulip)
{
 float redprice;
 float whiteprice;
 float tulipprice;
 float amount;
 float discount;
 float netprice;
 redprice = red * 2.00;
 whiteprice = white*4.10;
 tulipprice = tulip*2.50;
 amount = redprice+whiteprice+tulipprice;
 if (amount >= 200.0)
    { 
     discount = amount * (20.0/200.0);
     netprice = amount - discount ;
     cout << "your original bill = " <<amount <<endl;
     cout << "your discounted bill = " << netprice <<endl;
    }
       
     if  (amount < 200.0)
    {
     cout << " your bill is : " << amount<<endl;
    }
}
      
