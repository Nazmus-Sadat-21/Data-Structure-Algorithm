#include<iostream>
using namespace std;
int main(){
    char vowel[6]="aeiou";
    char s;
    cout<<"Enter a character = ";
    cin.get(s);
    int count=0;


    for(int i=0 ;i<6;i++){
        if (s==vowel[i])
        {
           count++;
        }
        
        
    }
    if(count==1)
    {
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }

}
