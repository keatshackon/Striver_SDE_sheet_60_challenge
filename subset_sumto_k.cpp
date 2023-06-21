#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int idx, int n, vector<int>&arr, vector<int>&ds, vector<vector<int>>&ans, int k) {

    if (idx == n) {

        int temp_sum = 0;
        for (auto q : ds) {
            temp_sum += q;
        }

        if (temp_sum == k) {
            ans.push_back(ds);
        }

        return;
    }

    ds.push_back(arr[idx]);
    solve(idx + 1, n, arr, ds, ans, k);
    ds.pop_back();

    solve(idx + 1, n, arr, ds, ans, k);

}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k) {

    vector<vector<int>>ans;
    vector<int>ds;
    solve(0, n, arr, ds, ans, k);

    // return ans;

    for (auto q : ans) {
        for (auto w : q) {
            cout << w << " ";
        }
        cout << "\n";
    }
}





