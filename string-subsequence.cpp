#include<iostream>
using namespace std;
int main(){

    string s = "abc";
    string t = "aecdbf";
    int count =0;

   

    for(int i =0;i<t.length;i++){
        for(int j = 0;j<s.length;j++){
            if(t[i]==s[j]){
               count ++;
            }
            
        }
    }
    if(count==s.length()){
        cout<<"s is a subsequence of t"<<endl;
    }
 

}
