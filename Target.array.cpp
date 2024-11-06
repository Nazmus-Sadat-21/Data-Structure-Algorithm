#include<iostream>
using namespace std;
void solution(int a[],int t){
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]+a[j]==t){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
int main(){
    int num[3]={1,2,3};
    int target = 3;

    solution(num,target);
}
