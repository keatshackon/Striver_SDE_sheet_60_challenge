bool searchMatrix(vector<vector<int>>& mat, int target) {

    int row = mat.size();
    int col = mat[0].size();


    int l = 0, r = (row * col) - 1;


    while (l <= r) {
        int mid = (l + r) / 2;

        int x = mid / col;
        int y = mid % col;

        if (target == mat[x][y]) {
            return true;
        } else if (target > mat[x][y]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }

    }
    return false;
}


