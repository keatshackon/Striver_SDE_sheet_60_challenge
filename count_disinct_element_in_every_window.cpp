#include <bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k)
{
    vector<int>ans;

    map<int, int>m;

    int len = arr.size();
    int i = 0, j = 0;

    while (j < len) {
        if ((j - i + 1) < k) {
            m[arr[j]]++;
            j++;
        } else {
            m[arr[j]]++;
            ans.push_back(m.size());
            m[arr[i]]--;
            if (m[arr[i]] == 0) {
                m.erase(arr[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}
