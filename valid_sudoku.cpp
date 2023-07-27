#include<bits/stdc++.h>

bool isItSudoku(int matrix[9][9]) {

    map<int, int>m;

    for (int i = 0; i < 9; i++) {
        m.clear();
        for (int j = 0; j < 9; j++) {
            if (m.count(matrix[i][j]) != 0) {
                return false;
            } else {
                if (matrix[i][j] >= 1)
                    m[matrix[i][j]] = 1;
            }
        }
    }

    m.clear();

    for (int i = 0; i < 9; i++) {
        m.clear();
        for (int j = 0; j < 9; j++) {
            if (m.count(matrix[j][i]) != 0) {
                return false;
            } else {
                if (matrix[j][i] >= 1)
                    m[matrix[j][i]] = 1;
            }
        }
    }

    m.clear();

    for (int i = 0; i < 9; i++) {

        m.clear();

        for (int j = 0; j < 9; j++) {

            int t1 = 3 * (i / 3) + j / 3;
            int t2 = 3 * (j / 3) + j % 3;

            if (m.count(matrix[t1][t2]) != 0) {
                return false;
            } else {
                if (matrix[t1][t2] >= 1)
                    m[matrix[t1][t2]]++;;
            }
        }
    }

    return true;
}


int main() {


    int board[9][9] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };


    isItSudoku(board);


    return 0;
}