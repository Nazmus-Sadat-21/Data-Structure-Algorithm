#include <iostream>
using namespace std;

int main() {
    int Array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int count[10] = {0};  // Initialize a count array with zeroes

    // Count occurrences of each element
    for (int i = 0; i < 10; i++) {
        count[Array_1[i]]++;
    }

    // Print the count of each element that occurs at least once
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << " occurs = " << count[i] << " times" << endl;
        }
    }

    return 0;
}
