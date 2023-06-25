#include<bits/stdc++.h>
using namespace std;

void nse(vector<int>&arr, vector<int>&rsm) {

    int n = arr.size();

    rsm[n - 1] = n;
    stack<int>st;
    st.push(n - 1);

    int i = n - 2;

    while (i >= 0) {
        if (arr[st.top()] < arr[i]) {
            rsm[i] = st.top();
            st.push(i);
        } else {
            while (!st.empty() and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                rsm[i] = n;
            } else {
                rsm[i] = st.top();
            }
            st.push(i);
        }
        i--;
    }
}

void pse(vector<int>&arr, vector<int>&lse) {

    int n = arr.size();
    lse[0] = -1;
    stack<int>st;

    st.push(0);

    int i = 1;
    while (i < n) {
        if (arr[st.top()] < arr[i]) {
            lse[i] = st.top();
            st.push(i);
        } else {
            while (!st.empty() and arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                lse[i] = -1;
            } else {
                lse[i] = st.top();
            }
            st.push(i);
        }
        i++;
    }
}


int largestRectangle(vector<int> & heights) {

    int n = heights.size();

    vector<int>lse(n, 0);
    vector<int>rse(n, 0);

    nse(heights, rse);
    pse(heights, lse);

    int ans = 0;


    for (int i = 0; i < n; i++) {
        int temp = (rse[i] - lse[i] - 1) * heights[i];
        ans = max(ans, temp);
    }


    return  ans;


}