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
