#include<iostream>
using namespace std;
int main(){
    string str = "Nazmus Sadat";

    int start=0,end=str.length()-1;

    while(start<end){
       int temp=str[end];
       str[end]=str[start];
       str[start]=temp;
       start++;
       end--;

    }

    cout<<str<<" ";

}
