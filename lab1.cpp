#include<iostream>
using namespace std;
int main(){
    int size = 20;
    int arr[size] = {5, 3, 9, 5, 3, 6, 7, 8, 9, 1, 5, 6, 9, 2, 3, 7, 4, 5, 8, 9};
    int count =0;

    cout<<"Main order : "<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    

    cout<<endl;
    cout<<"Reverse order : "<<endl;
    for(int i = size-1 ;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Counting elements : "<<endl;
    bool counted[20] = {false}; // Array to track counted elements
    for (int i = 0; i < size; i++) {
        if (!counted[i]) { // Only count if not already counted
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = true; // Mark as counted
                }
            }
            cout << "Element " << arr[i] << " occurs " << count << " times" << endl;
        }
    }



}
