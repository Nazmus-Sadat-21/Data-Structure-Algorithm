#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
    int x=0;

    for(int i=0;i<3;i++){
        x=arr2[i]-arr1[i];
    }

    cout<<"the integer number that add to arr1 is "<<x;
}

