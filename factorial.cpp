#include<iostream>
using namespace std;

void factorial(int number){
    int fact=1;
    for(int i=number;i>=1;i--){
      fact= fact*  number;
        
    }
    cout<<"The number of the factorial is = "<<fact;
}

int main(){
   int input;
   cout<<"Enter a number = ";
   cin>>input;
   factorial(input);
}