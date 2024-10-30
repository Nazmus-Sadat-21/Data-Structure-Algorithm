#include<iostream>
using namespace std;
int main(){
    int arr[8]={2,8,5,1,4,6,7};

    cout<<"main array : "<<endl;
    for(int i =0;i<=7;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl; 
    for(int i=8;i>3;i--){
        arr[i]=arr[i-1];
        // arr[3]=10;
        
        
    }
     arr[3]=10;
    cout<<"New array : "<<endl;
    for(int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }

}