#include <bits/stdc++.h>
int atoi(string str) {

    if (str.length() == 0) return 0;

    int n = str.length();

    int ans = 0;
    int sign = 1;

    if (str[0] == '-') sign = -1;

    for (int i = 0; i < n; i++) {
        if (str[i] >= '0' and str[i] <= '9') {
            int temp = str[i] - 48;
            ans = ans * 10 + temp;
        }
    }

    return ans * sign;
}