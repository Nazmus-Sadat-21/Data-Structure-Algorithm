#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int base , power,x = 1;

  cout<< "Enter any base number = ";
  cin>> base;
  cout<< "Enter any pow number = ";
  cin>> power;

  if(power>=0)
  {
      for(int i =1; i<= power ; i++)
      {
        x=x*base;
      }
  }
  cout<< "Result = "<< x;
   getch();
}
