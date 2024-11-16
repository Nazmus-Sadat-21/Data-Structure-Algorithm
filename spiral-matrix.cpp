#include<iostream>
using namespace std;
int main(){
    int m=4,n=4;
    int arr[m][n]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int srow=0,erow=m-1,
        scol=0,ecol=n-1;

     cout<<"Main matrix : "<<endl;

        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
        }
    
    
       cout<<endl;
       cout<<"Spiral Mtrix : "<<endl;


        while(srow<=erow && scol<=ecol){
            //Top
            for(int i=scol;i<=ecol;i++){

                cout<<arr[srow][i]<<" ";
            
            }

            //Right
            for(int j=srow+1;j<=erow;j++){
                cout<<arr[j][ecol]<<" ";
            }

            //Bottom
            for(int i = ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                cout<<arr[erow][i]<<" ";
            }

            //Left
            for(int j=erow-1;j>=srow+1;j--){
                if(scol==ecol){
                    break;
                }
                cout<<arr[j][scol]<<" ";
            }
             srow++;
             erow--;
             scol++;
             ecol--;

        }

}

