#include <iostream>
#include<conio.h>
using namespace std;
int main ()
{
   int a,b,c,n;
   cout<< "Enter any num for pyramid = ";
   cin>> n;

   for(a=1;a<=n;a++)
   {
     for(b=5;b>=a;b--)
        cout<< " ";

     for(c=1; c<=2*a-1;c++)

        cout<< "*";

        cout<< endl;
   }

    getch();
}
