#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number = ";
    int x;
    cin>>x;
    int temp=x;
    int count=0,digit;
    int a=0;
    while(x>0){ 
        x=x/10;
        count ++;
    }
    x=temp;
    while(x>0){ 
        digit = x%10; 
        int b=1;
        for(int i=0;i<count;i++){
            b*=digit;
        }
        a += b; 
        x=x/10;
       
    }
    if (a==temp){
     cout<<"Its an armstrong number ";
    }
    else{
     cout<<"Its not an armstrong number ";
    }
}

