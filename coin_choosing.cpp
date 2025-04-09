#include <iostream>
using namespace std;

int main() {
    int coins[] = {25, 10, 5, 2,50}; 
    int n = sizeof(coins) / sizeof(coins[0]);

    int amount;
    cout << "Enter the amount in cents: ";
    cin >> amount;

    cout << "Coins used: " << endl;

    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            cout << coins[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
