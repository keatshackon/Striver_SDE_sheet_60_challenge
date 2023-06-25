#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {

    sort(arr.begin(), arr.end());


    vector<vector<int>>ans;

    int i = 0;
    int l = n - 1;
    while (i < n) {

        if (i != 0 and arr[i] == arr[i - 1] ) {
            i++;
            continue;
        }
        int j = i + 1;
        l = n - 1;
        while (j < l) {

            if (j - 1 != i and arr[j] == arr[j - 1]) {
                j++;
                continue;
            }
            int temp = arr[i] + arr[j] + arr[l];
            if (temp == k) {
                ans.push_back({arr[i], arr[j], arr[l]});
                j++;
                l--;
            } else if (temp > k) {
                l--;
            } else {
                j++;
            }
        }
        i++;
    }

    return ans;
}


// int main() {

//     vector<int>arr = {0, 0, 0, 0, 0, 0, 0, 0};


//     int n = arr.size();
//     int k = 0;

//     findTriplets(arr, n, k);

//     return 0;
// }