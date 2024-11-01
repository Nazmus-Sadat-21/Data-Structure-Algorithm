#include <iostream>

using namespace std;

int main(){


 double mass , sum,avg;

 cout<< "Calculate the total mass "<< endl;

 for(int i=1;i<=8;i++)
 {
     cout<< "planet "<< i<< " = ";
     cin>> mass ;
     sum = sum+ mass ;
 }

  cout<< "Total mass = "<< sum;





 return 0;
}
