// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

#include <iostream>
using namespace std;

int main() {
    int nums[] = {0, 1, 0, 3, 12}; 
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


    int m = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[m] = nums[i];
            m++;
        }
    }

    for (int i = m; i < size; i++) {
        nums[i] = 0;
    }

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
