#include<iostream>
using namespace std;
int main(){
    int arr[]={12, 9, 4, 99, 120, 1, 3, 10, 23, 45};
    int size  =sizeof(arr)/sizeof(arr[0]);
    int count=0,count2=0;
    cout<<"The sorted array : "<<endl;

    for(int i=0;i<size-1;i++){   
        
        for(int j =i+1;j<size;j++){
            count2++;
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                count++;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of exchanges = "<<count<<endl;
    cout<<"number of comparison = "<<count2;
}

