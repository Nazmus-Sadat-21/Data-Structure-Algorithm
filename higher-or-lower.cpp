// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked.

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

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
      else if(guessnumber<randomnumber){
        cout<<"Number is higer than your guessing number "<<endl;
        cout<<"The number is "<<randomnumber<<endl;
      }
      else if(guessnumber>randomnumber){
        cout<<"Number is lower than your guessing number "<<endl;
        cout<<"The number is "<<randomnumber<<endl;
      }
  }
  
}
