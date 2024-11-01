#include <iostream>

using namespace std;

int main() {
    float a[6];
    int b[6];


    cout << "Enter 6 floating-point numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }


    cout << "Enter 6 integer numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> b[i];
    }


    cout << "Output: ";
    for (int i = 5; i >= 0; i--) {
        cout << a[i] * b[i] << " ";
    }

    return 0;
}
