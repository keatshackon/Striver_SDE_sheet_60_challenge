#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long  ans = 0;
    long long res = 0;

    for (int i = 0; i < n; i++) {
        ans += arr[i];

        res = max(res, ans);

        if (ans < 0) {
            ans = 0;
        }
    }

    return res;
}