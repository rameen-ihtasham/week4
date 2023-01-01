#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregate1(string name1 , int matricmarks1,int intermarks1, int ecatmarks1);
void calculateAggregate2(string name2 , int matricmarks2,int intermarks2, int ecatmarks2);
void compareMarks( string name1,  int ecatmarks1, string name2,  int ecatmarks2);
main ()
{

 int choice;
 string name1;
 int matricmarks1;
 int intermarks1;
 int ecatmarks1;
 string name2;
 int matricmarks2;
 int intermarks2;
 int ecatmarks2;
 string key;
  
 
  while (true)
     {
  
  printMenu ();
  cout <<"enter choice : ";
   cin >>choice;
  system ("cls");

   
 if (choice ==1)
    {
         system ("cls");
      cout << "enter your name : ";
      cin >> name1;
      cout << "enter your matric marks (out of 1100) : ";
      cin >>matricmarks1; 
      cout<<"enter your inter marks (out of 550) : ";
      cin >> intermarks1;
      cout<<"enter you ecat marks (out of 400 ) : ";
      cin >> ecatmarks1;
       cout << "press any key to continue";
      cin >>key ;
      if (key != "")
      {
      }
    }
 if (choice ==2)
    {
         system ("cls");
      cout << "enter your name : ";
      cin >> name2;
      cout << "enter your matric marks (out of 1100) : ";
      cin >>matricmarks2; 
      cout<<"enter your inter marks (out of 550) : ";
      cin >> intermarks2;
      cout<<"enter you ecat marks (out of 400 ) : ";
      cin >> ecatmarks2;
      cout << "press any key to continue";
      cin >>key ;
      if (key != "")
      {
      }
    }
if (choice ==3)
    {
       system ("cls");
     calculateAggregate1(name1 ,  matricmarks1, intermarks1,  ecatmarks1);
      cout << "press any key to continue";
      cin >>key ;
      if (key != "")
      {
      }
    }
if (choice ==4)
    {
        
     calculateAggregate2(name2 ,  matricmarks2, intermarks2,  ecatmarks2);
      cout << "press any key to continue";
      cin >>key ;
      if (key != "")
      {
      }
    }
if (choice==5)
   {
      system ("cls");
   compareMarks(  name1,  ecatmarks1,  name2,  ecatmarks2);
    cout << "press any key to continue";
      cin >>key ;
      if (key != "")
      {
      }
   }
     }
 
      
      
}
void printMenu()
  {
     system ("cls");
   
   cout << " ****************************" << endl;
   cout << " %                          %" << endl;
   cout << " %           UET            %" << endl;
   cout << " %         LAHORE           %" << endl;
   cout << " %                          %" << endl;
   cout << " ****************************" << endl;
   cout <<"                                "<<endl;
   cout <<"                                "<<endl;
   cout <<"                                "<<endl;
   cout << " Welcome to UET Admission Management System "<<endl;
   cout <<"                              "<<endl;
   cout<<"press 1 to enter the details of first student!"<<endl;
   cout<<"press 2 to enter the details of second student!"<<endl;
   cout<<"press 3 to calculate the aggregate of first student!"<<endl;
   cout<<"press 4 to calculate the aggregate of second student!"<<endl;
   cout<<"press 5 to display the student with Rollnumber 01"<<endl;
   
  }
 void calculateAggregate1(string name1 , int matricmarks1,int intermarks1, int ecatmarks1)
{
 float permatric1;
 float perinter1;
 float perecat1;
 float w_inter1;
 float w_matric1;
 float w_ecat1;
 float aggregate1;  
 permatric1 = (matricmarks1/1100.0)*100;
 w_matric1 = permatric1*10/100;
 perinter1 = (intermarks1/550.0)*100;
 w_inter1 = perinter1*40/100;
 perecat1 = (ecatmarks1/400.0)*100;
 w_ecat1 =perecat1*50/100;
 aggregate1 = (w_matric1)+(w_inter1)+(w_ecat1);
 cout << "aggregate of ";
 cout <<name1;
 cout << " is : " <<aggregate1;
}
 void calculateAggregate2(string name2 , int matricmarks2,int intermarks2, int ecatmarks2)
{
 float permatric2;
 float perinter2;
 float perecat2;
 float w_inter2;
 float w_matric2;
 float w_ecat2;
 float aggregate2;  
 permatric2 = (matricmarks2/1100.0)*100;
 w_matric2 = permatric2*10/100;
 perinter2 = (intermarks2/550.0)*100;
 w_inter2= perinter2*40/100;
 perecat2 = (ecatmarks2/400.0)*100;
 w_ecat2 =perecat2*50/100;
 aggregate2 = (w_matric2)+(w_inter2)+(w_ecat2);
 cout << "aggregate of ";
 cout <<name2;
 cout << " is : " <<aggregate2;
}
void compareMarks( string name1,  int ecatmarks1, string name2,  int ecatmarks2)
{
  if (ecatmarks1>ecatmarks2)
      {
       cout <<name1;
       cout << "'s roll number will be 01 " ;
      }
  if (ecatmarks1<ecatmarks2)
      {
       cout <<name2;
       cout << "'s roll number will be 01 " ;
      }
}


   
   
