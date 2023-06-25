#include <bits/stdc++.h>

vector<int> BFS(int vertex, vector<pair<int, int>> edges) {

    vector<int>m[vertex];

    int n = vertex;

    for (int i = 0; i < edges.size(); i++) {
        int x = edges[i].first;
        int y = edges[i].second;
        m[y].push_back(x);
        m[x].push_back(y);

    }

    for (int i = 0; i < vertex; i++) {
        sort(m[i].begin(), m[i].end());
    }



    queue<int>q;
    vector<int>ans;
    vector<bool>visited(vertex, 0);

    for (int i = 0; i < vertex; i++) {

        if (!visited[i]) {
            q.push(i);
            visited[i] = 1;

            while (!q.empty()) {
                int x = q.front();
                q.pop();

                ans.push_back(x);

                for (auto w : m[x]) {
                    if (!visited[w]) {
                        q.push(w);
                        visited[w] = 1;
                    }
                }
            }
        }
    }

    return ans;
}