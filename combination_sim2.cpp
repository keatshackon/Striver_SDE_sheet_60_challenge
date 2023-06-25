#include<bits/stdc++.h>
using namespace std;


void solve(int idx, int n, vector<int>&arr, int target, vector<int>&ds, vector<vector<int>>&ans) {

    if (target == 0) {
        ans.push_back(ds);
        return;
    } else if (idx == n or target < 0) {
        return;
    }

    for (int i = idx; i < n; i++) {
        if (i > idx  and arr[i - 1] == arr[i]) {
            continue;
        }

        ds.push_back(arr[i]);
        solve(i + 1, n, arr, target - arr[i], ds, ans);
        ds.pop_back();

    }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target) {


    vector<vector<int>>ans;
    vector<int>ds;

    sort(arr.begin(), arr.end());

    solve(0, n, arr, target, ds, ans);

    return  ans;
}