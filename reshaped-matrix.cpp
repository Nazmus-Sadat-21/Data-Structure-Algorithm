// n MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

// You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

// The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

// If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row and colums = ";
    cin>>n>>m;
    int a=2,b=2;
    int index=0;
    bool reshape = true;

    int mat [n][m]={};
    int mat2 [a][b]={
        {1,2},
        {3,4}
    };

    if(n*m==a*b){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                mat[index/m][index%m]=mat2[i][j];
                index++;
            }
        }
    }
    else{
         reshape=false;

    }

    if(!reshape){
        for(int k=0;k<a;k++){
            for(int l=0;l<b;l++){
                cout<<mat2[k][l]<<" ";
            }
            cout<<endl;
        }
    }
    else if(reshape==true){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            
        }
    }
}
