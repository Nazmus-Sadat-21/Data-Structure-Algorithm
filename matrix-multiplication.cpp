#include<iostream>
using namespace std;
int main(){
     int mat1[3][3]={
        {2,-1,3},
        {4,0,-1},
        {0,5,2}
    };

     int mat2[3][3]={
        {7,-2,8},
        {0,6,-2},
        {-1,0,9}
    };

    int arr[3][3];

    for( int i=0;i<3;i++){   
        for( int j=0;j<3;j++){
            arr[i][j]=0;
            for(int k=0;k<3;k++){
                arr[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    cout<<"Multiplication of two matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
