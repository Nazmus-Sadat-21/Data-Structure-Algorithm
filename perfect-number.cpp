//A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

//Given an integer n, return true if n is a perfect number, otherwise return false.

 

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number = ";
    cin>>n;
    int sum=0;

    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(n==sum){
        cout<<"Its a perfect number";
    }
    else{
        cout<<"Its not a perfect number";
    }

   
}
