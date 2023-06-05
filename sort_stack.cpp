#include <bits/stdc++.h>

void solve(stack<int>&st) {

	if (st.empty()) {
		return;
	}

	int x = st.top();
	st.pop();

	solve(st);

	if (st.empty()) {
		st.push(x);
	} else {
		stack<int>temp;

		while (!st.empty() and st.top() > x) {
			temp.push(st.top());
			st.pop();
		}

		st.push(x);

		while (!temp.empty()) {
			st.push(temp.top());
			temp.pop();
		}
	}
}

void sortStack(stack<int> &stack) {

	solve(stack);
}