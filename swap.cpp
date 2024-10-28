#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two number = ";
    cin>>n1>>n2;
    cout<<"The numbers is = "<<n1<<","<<n2<<endl;

    int temp ;
    temp = n1;
    n1=n2;
    n2=temp;

    cout<<"Swap value is = "<<n1<<","<<n2;

}