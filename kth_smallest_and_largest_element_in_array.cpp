#include<bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &arr, int n, int k) {

	// priority_queue<int>pq1;
	// priority_queue<int,vector<int>,greater<int>>pq2;


	// for(int i = 0;i <n; i++){
	// 	if(pq1.size() < k){
	// 		pq1.push(arr[i]);
	// 	}else{
	// 		if(pq1.top() > arr[i]){
	// 			pq1.pop();
	// 			pq1.push(arr[i]);
	// 		}
	// 	}

	// 	if(pq2.size() < k){
	// 		pq2.push(arr[i]);
	// 	}else{
	// 		if(pq2.top() < arr[i]){
	// 			pq2.pop();
	// 			pq2.push(arr[i]);
	// 		}
	// 	}
	// }

	// return {pq1.top(),pq2.top()};


	sort(arr.begin(), arr.end());

	return {arr[k - 1], arr[n - k]};
}