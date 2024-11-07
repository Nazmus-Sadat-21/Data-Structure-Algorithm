#include<iostream>
using namespace std;

void encode(string s,int j){
     for(int i=0;i<s.length();i=i+j+1){
        s[i]+=2;
     }
     cout<<s;
}


int main(){

   cout<<"Type a string : "; 
   string s;
   getline(cin,s);

   cout<<"Enter a skip valule = ";
   int j;
   cin>>j;
   encode(s,j);


   
}
