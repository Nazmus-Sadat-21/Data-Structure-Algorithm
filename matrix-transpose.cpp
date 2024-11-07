#include <iostream>
using namespace std;
int main(){
int matrix[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    };

    int matrix2[4][3]={};

    cout<<"Real matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            matrix2[i][j]=matrix[j][i];
        }
    }

    cout<<"After transpose matrix : "<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
           cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

}
