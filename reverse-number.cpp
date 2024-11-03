#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number = ";
    cin>>x;
    int rev=0;
    while(x>0){
        int digit=x%10;
        rev=(rev*10)+digit;
        x=x/10;
    }
   cout<<"Reverse number is = "<<rev;
}
