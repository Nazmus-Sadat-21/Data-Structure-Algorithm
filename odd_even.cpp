#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter a number : ";
    cin>>input;
    cout<<"Odd numbers are : "<<endl;
    for(int i=1;i<=input;i++){
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        
    }
    
}
