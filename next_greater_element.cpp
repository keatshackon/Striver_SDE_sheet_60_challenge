#include <bits/stdc++.h>

vector<int> nextGreater(vector<int> &arr, int n) {


    vector<int>ans(n, 0);
    ans[n - 1] = -1;

    int i = n - 2;
    stack<int>st;
    st.push(arr[n - 1]);

    while (i >= 0) {
        if (st.top() <= arr[i]) {
            while (!st.empty() and st.top() <= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(arr[i]);
        } else {
            ans[i] = st.top();
            st.push(arr[i]);
        }
        i--;
    }



    return ans;

}