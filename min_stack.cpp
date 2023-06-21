#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
	// Write your code here.

public:

	stack<pair<int, int>>st;
	// Constructor
	minStack() {

	}

	// Function to add another element equal to num at the top of stack.
	void push(int num)
	{
		if (!st.empty()) {
			int minn = st.top().second;
			st.push({num, min(minn, num)});
		} else {
			st.push({num, num});
		}

	}

	// Function to remove the top element of the stack.
	int pop()
	{
		if (!st.empty()) {
			int ans = st.top().first;
			st.pop();
			return ans;
		} else {
			return -1;
		}
	}

	// Function to return the top element of stack if it is present. Otherwise return -1.
	int top()
	{
		if (!st.empty()) {
			return st.top().first;
		} else {
			return -1;
		}
	}

	// Function to return minimum element of stack if it is present. Otherwise return -1.
	int getMin()
	{
		if (!st.empty()) {
			return st.top().second;
		} else {
			return -1;
		}
	}
};