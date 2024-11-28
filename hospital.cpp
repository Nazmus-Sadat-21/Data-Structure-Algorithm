#include<iostream>
using namespace std;
int main(){

    int n=5;
    int info[n]={90,85,92,75,98};
    int info2[n];

    for(int i=0;i<n;i++){
        info2[i]=info[i];
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(info[i]>info[j]){
                swap(info[i],info[j]);
            }
        }
    }

    cout<<"Minimum oxyzen level : ";
    cout<<info[0];
    cout<<endl;

    cout<<"Deleting minimum oxyzen level ";
    for(int i=3;i<n;i++){
        info2[i]=info2[i+1];
    }
    for(int i=0;i<n-1;i++){
       cout<<info2[i]<<" ";
    }

    cout<<endl;

    cout<<"New patient oxyzen level : ";
    for(int i=n;i>3;i--){
        info2[i]=info2[i-1];
    }
    info2[3]=81;
    for(int i=0;i<n;i++){
       cout<<info2[i]<<" ";
    }



}
