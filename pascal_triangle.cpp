#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) {

  vector<vector<long long>>ans;

  ans.push_back({1});

  if (n == 1) {
    return ans;
  }

  ans.push_back({1, 1});

  if (n == 2) {
    return ans;
  }

  for (int i = 3; i <= n; i++) {
    vector<long long>temp(i, 1);
    for (int j = 1; j <= i - 2; j++) {
      temp[j] = ans[i - 2][j] + ans[i - 2][j - 1];
    }
    ans.push_back(temp);
  }


  return ans;

}
