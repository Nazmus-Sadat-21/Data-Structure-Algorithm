// Given an integer n, return true if it is a power of three. Otherwise, return false.
// An integer n is a power of three, if there exists an integer x such that n == 3^x.

#include<iostream>
using namespace std;
int main(){
    int num,base=3;
    int a=1;
    cout<<"Enter a number = ";
    cin>>num;
    bool check=true;   
    for(int i=1;1<=i;i++){
        a*=base;
        if(num==a){
            cout<<"ture";
            check=false;  
            break;    
               
        }
    }
    if(check){
        cout<<"False";
           
    }   
}


//More appriciate 
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << n << " is not a power of three." << endl;
//         return 0;
//     }

//     while (n % 3 == 0) {
//         n /= 3; // Divide n by 3 as long as it's divisible
//     }

//     if (n == 1) {
//         cout << "It is a power of three." << endl;
//     } else {
//         cout << "It is not a power of three." << endl;
//     }

//     return 0;
// }


