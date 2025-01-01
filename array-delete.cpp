#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    cout<<"Arrays are : "<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int j=2;j<4;j++){
        arr[j]=arr[j+1];
    }
    cout<<"New array : "<<endl;
    for(int i =0;i<4;i++){
        cout<<arr[i]<<" ";
    }


}
