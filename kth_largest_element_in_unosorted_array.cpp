#include <bits/stdc++.h>
int kthLargest(vector<int>& arr, int size, int K) {


	priority_queue<int, vector<int>, greater<int>>pq;

	int i = 0;
	while (K--) {
		pq.push(arr[i]);
		i++;
	}

	while (i < size) {
		if (pq.top() < arr[i]) {
			pq.pop();
			pq.push(arr[i]);
		}
		i++;
	}

	return pq.top();

}