#include<iostream>
using namespace std;
int main(){
    int mat1[3][3]={
        {1,2,3},
        {2,3,4},
        {4,5,6}
    };
    int mat2[3][3]={
        {3,5,6},
        {7,9,0},
        {2,7,4}
    };
    cout<<"Both matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<mat1[i][k]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"Both matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int k=0;k<3;k++){
            cout<<mat2[i][k]<<" ";

        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Addition of both matrixs : "<<endl;
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            cout<<mat2[a][b]+mat1[a][b]<<" ";

        }
        cout<<endl;
    }

}