#include<iostream>
using namespace std;
int main(){
    int i,n,*ptr,sum=0;
    cout<<"Entera size = ";
    cin>>n;
    ptr=new int[n];

    for(i=0;i<n;i++){
        cin>>*(ptr+i);//ptr[i]
        sum+=*(ptr+i);
    }

    cout<<"total = "<<sum;
    delete [] ptr;
}
