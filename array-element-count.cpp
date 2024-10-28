#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,1,3,10,6,7,7,8,3,3};
    int input;
    int count=0;
    cout<<"Input a number = ";
    cin>>input;
    for(int i =0;i<=9;i++){
        if(arr[i]==input){
            count++;          
        }
    }
    cout<<input<<" "<<count<<" times exist"<<endl;
}