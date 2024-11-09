#include<iostream>
using namespace std;
int main()
{
    string array = "Nazmus sadat b10 CSE depertment";
    char character;
    int count=0;
    
        cout<<"Enter the character - "<<endl;
        cin>>character;
        for(int index=0;index<array.length();index++){
            if(character == array[index]){
            cout<<"YES"<<endl;
            break;
            }
            else{
              count++;
           }
        }
        
     if(count==array.length()){
        cout<<"NO";
     }
    return 0;
}
