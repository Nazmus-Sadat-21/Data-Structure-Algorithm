#include<iostream>
using namespace std;
int main (){
    int n, first=0,second=1;
    int sum = 0;
    cout<<"Enter a number  = ";
    cin>>n;

    cout<<"Fibonacci series is = ";
    for(int i = 1;i<=n;i++){
        if(i==1){
            cout<<first<<" ";
            continue;
        }
        if(i==2){
            cout<<second<<" ";
            continue;
        }
        sum = first+second;
        first=second;
        second=sum;
        cout<<sum<<" ";
    }
    return 0 ;
}