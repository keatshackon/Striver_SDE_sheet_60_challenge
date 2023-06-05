bool isValid(int n, vector<vector<int>>&b, int x, int y) {

    for (int i = 0; i < n; i++) {
        if (b[x][i] == 1) {
            return false;
        }

        if (b[i][y] == 1) {
            return false;
        }
    }

    int i = x;
    int j = y;
    while (i >= 0 and j >= 0) {
        if (b[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }

    i = x;
    j = y;
    while (i >= 0 and j < n) {
        if (b[i][j] == 1) {
            return false;
        }
        i--;
        j++;
    }
    return true;

}

void solve(int idx, int n, vector<vector<int>>&b, vector<vector<int>>&ans) {

    if (idx == n) {

        vector<int>temp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp.push_back(b[i][j]);
            }
        }
        ans.push_back(temp);
        return;
    }

    for (int j = 0; j < n; j++) {
        if (isValid(n, b, idx, j)) {
            b[idx][j] =  1;
            solve(idx + 1, n, b, ans);
            b[idx][j] = 0;
        }
    }
}


vector<vector<int>> solveNQueens(int n) {

    if (n == 1) {
        return {{1}};
    }

    vector<vector<int>>ans;
    vector<vector<int>>b(n, vector<int>(n, 0));

    solve(0, n, b, ans);

    return ans;
}