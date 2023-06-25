#include <bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k) {


	vector<int>ans;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans.push_back(a[i] + b[j]);
		}
	}

	sort(begin(ans), end(ans));
	vector<int>res;

	int i = ans.size() - 1;

	while (i >= 0 and k) {
		res.push_back(ans[i]);
		i--;
		k--;
	}

	return res;
}