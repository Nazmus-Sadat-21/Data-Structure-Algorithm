#include<iostream>
using namespace std;
int main(){

    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;

    if(alphabet>='a' && alphabet<='z'){

switch(alphabet){

case 'a':
    cout<<"It is a vowel"<<endl;
    break;

case 'e':
    cout<<"It is a vowel"<<endl;
    break;

case 'i':
    cout<<"It is a vowel"<<endl;
    break;

case 'o':
    cout<<"It is a vowel"<<endl;
    break;

case 'u':
    cout<<"It is a vowel"<<endl;
    break;

default:
    cout<<"It is a consonent"<<endl;
    break;
    }
}
    else{
        cout<<"It is  a character"<<endl;
    }


return 0;


}
