#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={4,1,3,7,9};

    for(int i=1;i<n;i++){
        int current =arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
