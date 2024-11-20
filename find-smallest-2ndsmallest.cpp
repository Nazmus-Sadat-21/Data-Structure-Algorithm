#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;

    
    int smallest, secondSmallest;

    
    if (a < b) {
        smallest = a;
        secondSmallest = b;
    } else {
        smallest = b;
        secondSmallest = a;
    }

    if (c < smallest) {
        secondSmallest = smallest;
        smallest = c;
    } else if (c < secondSmallest) {
        secondSmallest = c;
    }

    if (d < smallest) {
        secondSmallest = smallest;
        smallest = d;
    } else if (d < secondSmallest) {
        secondSmallest = d;
    }

    if (e < smallest) {
        secondSmallest = smallest;
        smallest = e;
    } else if (e < secondSmallest) {
        secondSmallest = e;
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Second smallest number: " << secondSmallest << endl;

    return 0;
}
