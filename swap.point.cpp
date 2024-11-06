#include<iostream>
using namespace std;

void swappointer(int *a,int *b){
     int temp = *a;
     *a=*b;
     *b=temp;

     cout<<*a<<" "<<*b;
}

int main(){

    int num=5,num2=3;
    swappointer(&num,&num2);


}
