#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number = ";
    cin>>x;
    int temp=x;
    int rev=0;
    while(x>0){
        int digit=x%10;
        rev=(rev*10)+digit;
        x=x/10;
    }
    if(rev==temp){
        cout<<"Palidrome number "<<endl;
    }
    else{
        cout<<"Not a palindrome number"<<endl;
    }
}
