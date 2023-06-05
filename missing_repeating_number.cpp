#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {


	int x = 0;

	for (auto q : arr) {
		x ^= q;
	}

	for (int i = 1; i <= n; i++) {
		x ^= i;
	}

	int temp = x;
	int i = 0;
	while (true) {
		if ((x & 1 << i) >= 1) {
			break;
		}
		i++;
	}

	int s1 = 0, s2 = 0;


	for (int j = 0; j < n; j++) {
		if ((arr[j] & (1 << i))) {
			s1 ^= arr[j];
		} else {
			s2 ^= arr[j];
		}
	}

	for (int j = 1; j <= n; j++) {
		if ((j & (1 << i))) {
			s1 ^= j;
		} else {
			s2 ^= j;
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] == s1) {
			return {s2, s1};
		}
	}

	return {s1, s2};
}
