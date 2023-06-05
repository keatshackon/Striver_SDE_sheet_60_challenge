#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {


	int k = arr1.size() - 1;
	m -= 1, n -= 1;

	while (m >= 0 and n >= 0) {
		if (arr1[m] > arr2[n]) {
			arr1[k] = arr1[m];
			k--; m--;
		} else {
			arr1[k] = arr2[n];
			n--; k--;
		}
	}

	while (n >= 0) {
		arr1[k] = arr2[n];
		k--;
		n--;
	}

	return arr1;
}