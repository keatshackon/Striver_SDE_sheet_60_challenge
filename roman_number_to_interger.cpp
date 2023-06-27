#include <bits/stdc++.h>
int romanToInt(string s) {


    map<char, int>m = {{'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };


    int i = 0;
    int ans = 0;
    while (i < s.length()) {
        if ((i + 1 < s.length()) and m[s[i]] < m[s[i + 1]]) {
            int temp = m[s[i + 1]] - m[s[i]];
            ans += temp;
            i += 2;
        } else {
            ans = ans + m[s[i]];
            i++;
        }
    }
    return ans;
}