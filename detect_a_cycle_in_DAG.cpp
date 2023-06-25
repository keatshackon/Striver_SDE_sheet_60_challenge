#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

	int v = n;
	int e = edges.size();

	vector<int>ind(v + 1, 0);
	vector<int>g[v + 1];

	for (int i = 0; i < e; i++) {
		ind[edges[i].second]++;
		g[edges[i].first].push_back(edges[i].second);
	}

	queue<int>pq;

	for (int i = 1; i <= v; i++) {
		if (ind[i] == 0) {
			pq.push(i);
		}
	}

	int cnt = 0;


	while (!pq.empty()) {
		int temp = pq.front();
		pq.pop();
		cnt++;

		for (auto w : g[temp]) {
			ind[w]--;
			if (ind[w] == 0) {
				pq.push(w);
			}
		}
	}


	if (cnt == n) return 0;
	else return 1;
}