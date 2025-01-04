#include<iostream>
using namespace std;
int main(){
    int n=11,target,count=0,com=0;
    
    int arr[n]={1,2,3,4,5,6,7,8,9,10,11};

    cout<<"Enter a target value = ";
    cin>>target;

    int st=0;
    int end= n-1;
    while(st<=end){
        int mid = (st+end)/2;


        

        if(target==arr[mid]){
         cout<<target<<" value exist in "<<mid<<" no index";
          break;
        }
        else if(target>arr[mid]){
             st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        com++;
    }
    if(st>end){
        cout<<target<<" do not found in array";
    }
    cout<<endl;
    cout<<"Total comparison = "<<com;

}
