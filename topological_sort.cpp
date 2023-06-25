#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	vector<vector<int>>edges = {
		{1, 2},
		{2, 3},
		{3, 4},
		{4, 5}
	};
	int v = 5;
	int e = 4;

	vector<int>ans;
	vector<int>ind(v, 0);
	vector<int>g[v];

	for (int i = 0; i < e; i++) {
		ind[edges[i][1]]++;
		g[edges[i][0]].push_back(edges[i][1]);
	}

	queue<int>pq;

	for (int i = 0; i < v; i++) {
		if (q == 0) {
			pq.push(q);
		}
	}

	while (!pq.empty()) {
		int temp = pq.front();
		pq.pop();
		ans.push_back(temp);
		for (auto w : g[temp]) {
			ind[w]--;
			if (ind[w] == 0) {
				pq.push(w);
			}
		}

	}

	return 0;
}