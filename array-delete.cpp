#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    cout<<"Arrays are : "<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=2;i<4;i++){
        arr[i]=arr[i+1];
    }
    cout<<"New array : "<<endl;
    for(int i =0;i<4;i++){
        cout<<arr[i]<<" ";
    }


}