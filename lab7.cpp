#include <iostream>
using namespace std;
int main(){
    
    bool bulb[]={false, false,false,true, false};
    int size = sizeof(bulb)/sizeof(bulb[0]);

    for(int i=0;i<size;i++){
        if(bulb[i]==true){
            cout<<"The first lightbulb broken index is : "<<i;
            break;
        }
    }

}
