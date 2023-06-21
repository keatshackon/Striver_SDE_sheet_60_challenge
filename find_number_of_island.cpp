
void solve(int i, int j, int **arr, vector<vector<int>>&vis, int n, int m) {


   int dx[] = {1, -1, -1, 1, 0, -1, 0, 1};
   int dy[] = {1, -1, 1, -1, 1, 0, -1, 0};


   for (int k = 0; k < 8; k++) {
      int x = i + dx[k];
      int y = j + dy[k];

      if (x >= 0 and x < n and y >= 0 and y < m and arr[x][y] == 1 and !vis[x][y]) {
         vis[x][y] = 1;
         solve(x, y, arr, vis, n, m);
      }

   }
}


int getTotalIslands(int** arr, int n, int m) {

   int cnt = 0;
   vector<vector<int>>vis(n, vector<int>(m, 0));

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         if (arr[i][j] == 1 and vis[i][j] == 0) {
            solve(i, j, arr, vis, n, m);
            cnt++;
         }
      }
   }

   return cnt;
}
