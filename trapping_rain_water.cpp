#include <bits/stdc++.h>


vector<long> right_max(long *arr, int n) {

    vector<long>r_max(n, 0);

    r_max[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        r_max[i] = max(r_max[i + 1], arr[i]);
    }

    return r_max;
}

long getTrappedWater(long *arr, int n) {


    long max_so_far = arr[0];
    vector<long>r_max = right_max(arr, n);

    long ans = 0;

    for (int i = 1; i < n - 1; i++) {
        max_so_far = max(arr[i], max_so_far);
        ans += min(r_max[i] , max_so_far)  - arr[i];
    }

    return ans;

}
