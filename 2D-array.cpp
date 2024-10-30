#include<iostream>
using namespace std;
int main(){
    int arr[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,8},
        {3,2,1,4,5},
    };

    for(int i =0;i<3;i++){ //row
        for(int j=0;j<5;j++){ //colum
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}