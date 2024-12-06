#include<iostream>
using namespace std;
int main(){

    string s = "abchkjhk";
    string t = "aecdbf";
    int count =0, n=0,m=0;

    if(s.length()>t.length()){
        cout<<"s is a main string";
        n= s.length();
        m=t.length();
    }
    else if(t.length()>s.length()){
        cout<<"t is a main string";
        n=t.length();
        m=s.length();

    }
    cout<<endl;

    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(s[i]==t[j]){
               count ++;
            }
            
        }
    }
    if(count==s.length()){
        cout<<"s is a subsequence of t"<<endl;
    }
    else if(count==t.length()){
        cout<<"t is a subsequence of s";
    }


}
