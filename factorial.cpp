#include<iostream>
using namespace std;

void factorial(int number){
    int fact=1;
    for(int i=1;i<=number;i++){
      fact= fact*i;
        
    }
    cout<<"The number of the factorial is = "<<fact;
}

int main(){
   int input;
   cout<<"Enter a number = ";
   cin>>input;
   factorial(input);
}