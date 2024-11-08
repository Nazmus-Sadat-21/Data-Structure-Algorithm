#include<iostream>
using namespace std;
int main(){

    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int a[n]={};
    for(int i=0;i<n;i++){

       a[i]=arr[i];
       a[n-1]=arr[n-1]+1;
    }
     for(int i=0;i<n;i++){

      cout<<a[i]<<" ";
    }



}
