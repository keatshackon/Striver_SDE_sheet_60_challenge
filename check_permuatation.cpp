#include <bits/stdc++.h>
bool areAnagram(string &str1, string &str2) {


    if (str1.length() != str2.length()) return 0;


    int arr[26] = {0};
    int n = str1.length();

    for (int i = 0; i < n; i++) {
        arr[str1[i] - 'a']++;
        arr[str2[i] - 'a']--;
    }

    for (auto q : arr) {
        if (q != 0) {
            return 0;
        }
    }

    return 1;
}