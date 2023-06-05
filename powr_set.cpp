#include <bits/stdc++.h>


void solve(int idx, int n, vector<int>&v, vector<int>&ds, vector<vector<int>>&ans) {

    if (idx == n) {
        ans.push_back(ds);
        return;
    }

    // Not Picking
    solve(idx + 1, n, v, ds, ans);
    ds.push_back(v[idx]);
    solve(idx + 1, n, v, ds, ans);
    ds.pop_back();

}

vector<vector<int>> pwset(vector<int>v) {

    int n = v.size();
    vector<int>ds;
    vector<vector<int>>ans;

    solve(0, n, v, ds, ans);

    return ans;
}