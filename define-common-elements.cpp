#include<iostream>
using namespace std;
int main(){

    int arr1[]={4,3,5,7,9,10,1,3};
    int arr2[]={5,4,7,9,10,1};
    int n=sizeof(arr1)/4;
    int p=sizeof(arr2)/4;
    int a=0;
    int arr[a]={};

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            if(arr1[i]==arr2[j]){
                arr[a]=arr2[j];
                a++;
            }
        }
    }
    
    cout<<"Common elements are : ";
   
    for(int x=0;x<a;x++ ){
        cout<<arr[x]<<" ";
    }

}
