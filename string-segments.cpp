#include<iostream>
using namespace std;
int main(){
    string s ="My name is Nazmus Sadat";
    int count =0;
    bool segments = false;

    for(int i =0 ; i<s.length();i++){
        if(s[i]!=' '){
            if(!segments){
                count ++;
                segments = true;
            }
        }
        else{
            segments =  false;
        }
    }
    cout<<"Number of segments = "<<count;
}

