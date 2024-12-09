#include<iostream>
using namespace std;
int main(){
    int n=5;
    int score [n]={3,2,5,4,1};

    for(int k =0;k<n-1;k++){
        for(int j =k+1;j<n;j++){
            if(score[j]<score[k]){
                int temp = score[j];
                score[j]=score[k];
                score[k]=temp;

            }
        }
    }

    for(int i=0;i<n;i++){
        if(score[i]==1){
            cout<<"Gold Medal"<<endl;
        }
        else if(score[i]==2){
            cout<<"Silver Medal"<<endl;
        }
        else if(score[i]==3){
            cout<<"Bronze Medal"<<endl;
        }
        else{
            cout<<score[i]<<"th"<<endl;
        }

    }


}
