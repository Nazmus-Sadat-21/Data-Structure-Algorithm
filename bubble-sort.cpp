#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];
    bool sawping=false;

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int k =0;k<n-1;k++){
        
        for(int j =0;j<n-k-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sawping=true;

            }
        }
       
    }
    
    if(!sawping){
            cout<<"Elements already sorted";
    }
    else{
    cout<<"After sorting array : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }

}
