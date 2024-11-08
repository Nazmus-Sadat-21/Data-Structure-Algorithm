#include<iostream>
using namespace std;
int main(){
    int count = 0;
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);

    for(int i =s.length()-1;i>=0;i--){   
        if( s[i]!=' '){        
            count++;
        }
        else{
            break;
        }
        
    }
    cout<<"The last word length is = "<<count;
}
