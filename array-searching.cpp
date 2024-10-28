#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,10,5,8,5,30,40,9,2,3};
    int input;
    int count=0;
    cout<<"Enter a number = ";
    cin>>input;
    for(int i=0;i<=9;i++){
        if(arr[i]==input){
           cout<<input<<" is exist in array :)"<<endl; 
           break;
           
        }
       else{
        count++;
       }
          
    }
    if (count==10)
    {
        cout<<input<<" is not exist in array"<<endl;
    }    
    
}

