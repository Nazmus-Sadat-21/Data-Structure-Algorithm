#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}





int knapsack(int W, int wt[], int val[], int n) {
    int dp[100][100]; 

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (wt[i - 1] <= w) {
                int include = val[i - 1] + dp[i - 1][w - wt[i - 1]];
                int exclude = dp[i - 1][w];
                dp[i][w] = max(include, exclude);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int n, W;
    int wt[100], val[100]; 

    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter values of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter weights of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    cout << "Enter capacity of knapsack: ";
    cin >> W;

    int result = knapsack(W, wt, val, n);
    cout << "Maximum value in knapsack = " << result << endl;

    return 0;
}
