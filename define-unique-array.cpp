#include<iostream>
using namespace std;
int main(){

    int arr[]={1,4,6,3,6,9,1,3};
    int n=sizeof(arr)/4;
    int i,k,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"After removing duplicate value : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
