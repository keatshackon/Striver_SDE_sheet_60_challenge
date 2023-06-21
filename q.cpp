#include <bits/stdc++.h>
using namespace std;

int main() {

    int i = 1, j = 1;
    int n = 1000;
    int cnt = 0;
    while (j < n) {
        j += i;
        i++;

        cout << i << " " << j << "\n";
        cnt++;
    }

    cout << "\n" << cnt << "\n";
}
