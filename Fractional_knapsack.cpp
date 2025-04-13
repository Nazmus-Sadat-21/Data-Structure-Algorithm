#include <iostream>
using namespace std;

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter capacity of knapsack: ";
    cin >> capacity;

    int value[100], weight[100];
    float ratio[100];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight of item " << i + 1 << ": ";
        cin >> value[i] >> weight[i];
        ratio[i] = (float)value[i] / weight[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                
                float tempRatio = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = tempRatio;

                
                int tempVal = value[j];
                value[j] = value[j + 1];
                value[j + 1] = tempVal;

                
                int tempWt = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempWt;
            }
        }
    }

    float totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity == 0)
            break;

        if (weight[i] <= capacity) {
            totalValue += value[i];
            capacity -= weight[i];
        } else {
            totalValue += value[i] * ((float)capacity / weight[i]);
            capacity = 0;
        }
    }

    cout << "Maximum value in knapsack = " << totalValue << endl;

    return 0;
}
