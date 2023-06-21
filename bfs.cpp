#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(int vertex, vector<pair<int, int>> edges) {

    //Lests build the graph
    map<int, vector<int>>m;

    int n = vertex;

    for (int i = 0; i < edges.size(); i++) {
        int x = edges[i].first;
        int y = edges[i].second;
        m[x].push_back(y);
        m[y].push_back(x);
    }


    for (auto q : m) {
        cout << q.first << " : ";
        for (auto w : q.second) {
            cout << w << " ";
        }
        cout << "\n";
    }

    queue<int>q;

    vector<int>ans;

    vector<bool>visited(n, 0);



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





    for (auto q : ans) {
        cout << q << " ";
    }

    return ans;
}


int main() {


    int vertex = 0;
    vector<pair<int, int>>pa = {
        {0, 1},
        {0, 4},
        {1, 2},
        {2, 0},
        {2, 4},
        {3, 0},
        {3, 2},
        {4, 3},
    };

    BFS(5, pa);




    return 0;
}