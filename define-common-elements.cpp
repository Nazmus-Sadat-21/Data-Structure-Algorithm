#include <iostream>
using namespace std;

int main() {
    // Initialize two arrays with different sizes
    int A[] = {1, 2, 3, 4, 5, 6};
    int B[] = {4, 5, 6, 7, 8};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int a=0;
    int arr[a]={};

    // Track which elements have already been printed
    bool hasCommon = false;

    cout << "Common elements: ";
    for (int i = 0; i < sizeA; i++) {
        bool alreadyPrinted = false;

        // Check if A[i] has already been printed
        for (int k = 0; k < i; k++) {
            if (A[i] == A[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (!alreadyPrinted) {
            // Check if A[i] exists in B
            for (int j = 0; j < sizeB; j++) {
                if (A[i] == B[j]) {
                    arr[a]=A[i];
                    a++;
                    hasCommon = true;
                    break;
                }
            }
        }
    }

    if (!hasCommon) {
        cout << "No common element!";
    }
    else{
        cout<<"Common elements are : ";
        for(int x=0;x<a;x++ ){
            
            cout<<arr[x]<<" ";
            
        }

    }

    
}
