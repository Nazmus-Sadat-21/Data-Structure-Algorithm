#include<iostream>
using namespace std;
int main(){
    int input,count=0;
    cout<<"Enter a number = ";
    cin>>input;
    for(int i=2;i<input;i++){
        if(input%i==0){  
            count++;       
               
        }  
         if(count==0){
            cout<<i<<endl;
        }  
        
    }
    // if(count==0){
    //     cout<<"Prime number"<<endl;

    // }
    
    // else{
    //     cout<<"Not a prime number"<<endl;
    // }
    
}
