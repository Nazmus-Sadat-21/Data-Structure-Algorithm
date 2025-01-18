#include<iostream>
using namespace std;
int main(){
    int input;
   
    cout<<"define arrays size = ";
    cin>>input;
    int arr[input]={};
    cout<<"input array elements"<<endl;
    for (int i = 0; i<=input-1; i++)
    {
        cin>>arr[i];

    }
    cout<<"Arrays = "<<endl;
    for(int k=0; k<=input-1;k++){

        cout<<arr[k]<<endl;
    }
    return 0 ;
    

}
