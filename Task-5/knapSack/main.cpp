#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int W, int weights[], int values[]) {
    if (n == 0 || W == 0) {
        return 0;
    }
    if (weights[n - 1] > W) {
        return knapsack(n - 1, W, weights, values);
    }
    return max(values[n - 1] + knapsack(n - 1, W - weights[n - 1], weights, values),
               knapsack(n - 1, W, weights, values));
}
int main() {
    int N, W;
    cin >> N >> W;
    int weights[N];
    int values[N];
    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }
    int result = knapsack(N, W, weights, values);
    cout << result << endl;
    return 0;
}

