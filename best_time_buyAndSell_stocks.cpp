#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices) {

    int profit = 0;
    int n = prices.size();

    int min_so_far = prices[0];

    for (int i = 1; i < n; i++) {

        int temp = prices[i] - min_so_far;

        profit = max(profit, temp);

        min_so_far = min(min_so_far, prices[i]);

    }

    return profit;
}