#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n) {

	int x = 0;

	map<int, int>m;

	for (int i = 0; i < n; i++) {
		m[arr[i]]++;
		if (m[arr[i]] > 1) {
			return arr[i];
		}
	}

}
