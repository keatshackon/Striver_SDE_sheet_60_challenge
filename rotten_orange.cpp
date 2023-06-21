#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m) {


    int row = grid.size();
    int col = grid[0].size();

    queue<pair<int, int>>q;

    int w = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({i, j});
            }

            if (grid[i][j] == 1) {
                w = 1;
            }
        }
    }

    if (q.empty()) {
        if (w == 1) {
            return -1;
        } else {
            return 0;
        }
    }

    int time = 0;

    while (!q.empty()) {

        int n = q.size();
        time++;

        while (n--) {
            pair<int, int>temp = q.front();
            q.pop();

            int dx[] = {1, -1, 0, 0};
            int dy[] = {0, 0, 1, -1};

            for (int i = 0; i < 4; i++) {
                int x = temp.first + dx[i];
                int y = temp.second + dy[i];

                if (x >= 0 and x < row and y >= 0 and y < col and grid[x][y] == 1) {
                    grid[x][y] = 2;
                    q.push({x, y});
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }

    return time - 1;
}