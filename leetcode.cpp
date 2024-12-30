#include <iostream>
using namespace std;

int minOperationsToExceedK(int nums[], int n, int k) {
    int operations = 0;
    const int LARGE_VALUE = 1e9; // A very large value to mark removed elements

    while (true) {
        int smallest = LARGE_VALUE; // To find the smallest element
        int smallestIndex = -1; // To keep track of the index of the smallest element
        bool allGreaterOrEqual = true; // Flag to check if all elements are >= k

        for (int i = 0; i < n; ++i) {
            if (nums[i] < k) {
                allGreaterOrEqual = false; // Found an element < k
                if (nums[i] < smallest) {
                    smallest = nums[i];
                    smallestIndex = i;
                }
            }
        }

        if (allGreaterOrEqual) break; // Stop if all elements are >= k

        // Remove the smallest element
        nums[smallestIndex] = LARGE_VALUE; // Replace it with a large value to mark as "removed"
        operations++;
    }

    return operations;
}

int main() {
    int nums[] = {2, 4, 1, 3, 5}; // Array of integers
    int n = sizeof(nums) / sizeof(nums[0]); // Size of the array
    int k = 3; // Target value
    
    int result = minOperationsToExceedK(nums, n, k);
    cout << "Minimum number of operations: " << result << endl;

    return 0;
}
