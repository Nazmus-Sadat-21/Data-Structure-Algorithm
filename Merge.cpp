#include<iostream>
using namespace std;

int main(){

    int arr1[]={10,20,30,40,50};
    int arr2[]={60,70,80,90,100,110};
    int n=sizeof(arr1)/4;
    int p=sizeof(arr2)/4;
    int a=0;
    int arr[a];
    
    for(int i=0;i<n;i++){
        
        arr[a]=arr1[i];
        a++;
    }

    for(int j=0;j<p;j++){
        arr[a]=arr2[j];
        a++;
    }
    
    for(int m=0;m<a;m++){
        cout<<arr[m]<<" ";
    }

    
}
