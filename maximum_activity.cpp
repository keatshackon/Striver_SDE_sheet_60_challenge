#include <bits/stdc++.h>
using namespace std;

int maximumActivities(vector<int> &start, vector<int> &finish) {

    vector<pair<int, int>>v;

    int n = start.size();

    for (int i = 0; i < n; i++) {
        v.push_back({start[i], finish[i]});
    }

    sort(v.begin(), v.end(), [&](pair<int, int> i, pair<int, int> j) {
        if (i.second < j.second) {
            return true;
        } else if (i.second == j.second) {
            return i.first < j.first;
        }
        return i.second < j.second;
    });



    int ans = 1;
    int x = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= x) {
            ans++;
            x = v[i].second;
        }
    }

    return ans;
}