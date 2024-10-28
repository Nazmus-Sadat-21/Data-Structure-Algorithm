#include<iostream>
using namespace std;
int main()
{
  while (1)
  {
      int guessnumber,randomnumber;
      cout<< "Guess the number between 1 to 10 : ";
      cin>> guessnumber;
      randomnumber = 1+rand()%10;
      if(guessnumber==randomnumber)
      {
          cout<< "YOU HAVE WON!"<< endl<<endl;
      }
      else
      {
          cout<< "You have lost...better luck next time."<<endl;
          cout<< "The random number was : "<< randomnumber<<endl<<endl;
      }
  }
  
}
