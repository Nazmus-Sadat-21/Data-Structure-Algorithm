// You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

// Return the score of s.

 

#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string = ";
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.length();i++){
        int diff=0;
        if(i==s.length()-1){
            s[i]=0;
        }
        diff= (s[i]-s[i+1]);
        if(diff<0){
            diff=-diff;
        }
        sum+=diff;
    }

    cout<<"The score of the string is = "<<sum;
}
