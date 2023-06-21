#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {

	int taaj = -1e9;
	int len = n;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (taaj == -1e9) {
			taaj = arr[i];
			cnt = 1;
		} else if (taaj == arr[i]) {
			cnt++;
		} else {
			cnt--;
			if (cnt == 0) {
				taaj = -1e9;
			}
		}
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (taaj == arr[i]) {
			ans++;
		}
	}

	if (ans > len / 2) {
		return taaj;
	} else {
		return -1;
	}
}