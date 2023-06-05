#include <bits/stdc++.h>


void solve(int idx, int n, string &s, vector<string>&ans) {

    if (idx == n) {
        ans.push_back(s);
        return;
    }

    for (int i = idx; i < n; i++) {
        swap(s[idx], s[i]);
        solve(idx + 1, n, s, ans);
        swap(s[idx], s[i]);
    }


}

vector<string> findPermutations(string &s) {
    // Write your code here.

    vector<string>ans;
    int n = s.length();
    solve(0, n, s, ans);
    return ans;
}