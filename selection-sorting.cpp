#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int k =0;k<n-1;k++){
        for(int j =k+1;j<n;j++){
            if(arr[j]<arr[k]){
                int temp = arr[j];
                arr[j]=arr[k];
                arr[k]=temp;

            }
        }
    }
    cout<<"After sorting array : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
