#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&values, vector<int>&weight, int n, int w, vector<vector<int>>&dp) {

	if (n < 0 or w <= 0) {
		return 0;
	}

	if (dp[n][w] != -1) {
		return dp[n][w];
	}

	int s1 = 0;
	int s2 = 0;

	s1 = solve(values, weight, n - 1, w, dp);

	if (w - weight[n] >= 0) {
		s2 = values[n] + solve(values, weight, n - 1, w - weight[n], dp);
	}

	return dp[n][w] = max(s1, s2);

}


int maxProfit(vector<int> &values, vector<int> &weights, int n, int w) {


	//vector<vector<int>>dp(n,vector<int>(w+1,-1));
	//return solve(values,weights,n-1,w,dp);

	vector<vector<int>>dp(n + 1, vector<int>(w + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {

			int s1 = 0;
			int s2 = 0;


			s1 = dp[i - 1][j];

			if (weights[i - 1] <= j) {
				s2 = values[i - 1] + dp[i - 1][j - weights[i - 1]];
			}

			dp[i][j] = max(s1, s2);
		}
	}

	return dp[n][w];
}