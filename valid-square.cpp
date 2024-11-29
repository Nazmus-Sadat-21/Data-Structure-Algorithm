#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool check =false;
    for(int i=1;i<=n;i++){
        if(i*i==n){          
            cout<<"true";  
            check=true;
            break;
          
        }
        else{
           check=false;
        }

    }
    if(!check){
        cout<<"false";
    }

}
