#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {

    sort(arr.begin(), arr.end());

    int k = 0;
    int z = n - 1;


    while (k < z) {
        z = n - 1;
        int i = k + 1;
        while (i < n) {
            z = n - 1;
            int j = i + 1;
            while (j < z) {
                int temp = arr[k] + arr[i] + arr[j] + arr[z];
                if (temp == target) {
                    return  "Yes";
                } else if (temp > target) {
                    z--;
                } else {
                    j++;
                }
            }
            i++;
        }
        k++;
    }

    return "No";

}
