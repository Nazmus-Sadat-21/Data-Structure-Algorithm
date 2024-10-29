#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number  = ";
    cin>>n;
    int marks[n]={};
    cout<<"Input marks : "<<endl;
    for(int i =0;i<n;i++){
        cin>>marks[i];
    }
    cout<<"Marks are : "<<endl;
    for(int k =0;k<n;k++){
        count+=marks[k];
        cout<<marks[k]<<" ";
    }
    cout<<endl;
    double average = count/n;
    cout<<"Average of marks = "<<average;

}