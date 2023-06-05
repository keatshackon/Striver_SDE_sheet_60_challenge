#include <bits/stdc++.h>


void solve(int idx, int n, vector<int>&num, int &sum, vector<int>&ans) {

	if (idx == n) {
		ans.push_back(sum);
		return;
	}
	solve(idx + 1, n, num, sum, ans);
	sum += num[idx];
	solve(idx + 1, n, num, sum, ans);
	sum -= num[idx];
}

vector<int> subsetSum(vector<int> &num) {


	vector<int>ans;
	int sum = 0;

	int n = num.size();

	solve(0, n, num, sum, ans);
	sort(begin(ans), end(ans));

	return ans;

	// Write your code here.
}