#include<iostream>
using namespace std;
int main (){
    int n,com=0,count=0;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];
    bool sawping;

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int k =0;k<n-1;k++){
        for(int j =0;j<n-k-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
                
            }
        }
        com++;
       
    }

    
    cout<<"After sorting array : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total swaping = "<<count<<endl;
    cout<<"Total comparison = "<<com;


}

