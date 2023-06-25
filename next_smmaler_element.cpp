#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {


    vector<int>ans(n, -1);

    stack<int>st;

    ans[n - 1] = -1;
    st.push(arr[n - 1]);

    int i = n - 2;
    while (i >= 0) {
        if (st.top() < arr[i]) {
            ans[i] = st.top();
            st.push(arr[i]);
        } else {
            while (!st.empty() and st.top() >= arr[i]) {
                st.pop();
            }

            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        i--;
    }

    return ans;

}