#include<bits/stdc++.h>
using namespace std;

vector<int> MinimumCoins(int n) {

    vector<int>denomination = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    vector<int>ans;

    while (n > 0) {
        int s = upper_bound(denomination.begin(), denomination.end(), n) - denomination.begin();
        ans.push_back(denomination[s - 1]);
        n -= denomination[s - 1];
    }

    return ans;
}


int main() {

    MinimumCoins(13);

    return 0;
}