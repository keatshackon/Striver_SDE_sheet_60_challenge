void solve(int idx, vector<int>g[], vector<int>&temp, vector<int>&vis) {

    for (auto q : g[idx]) {
        if (!vis[q]) {
            vis[q] = 1;
            temp.push_back(q);
            solve(q, g, temp, vis);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {

    vector<vector<int>>ans;

    vector<int>g[V];
    int n = edges.size();
    vector<int>vis(V, 0);

    for (int i = 0; i < n; i++) {
        int x = edges[i][0];
        int y = edges[i][1];

        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 0; i < V; i++) {

        if (!vis[i]) {
            vector<int>temp;
            vis[i] = 1;
            temp.push_back(i);
            solve(i, g, temp, vis);
            ans.push_back(temp);
        }

    }
    return  ans;
}