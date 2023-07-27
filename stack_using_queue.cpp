#include <bits/stdc++.h>
class Stack {

    queue<int>q;
    queue<int>q1;
    int topp = -1;

public:
    Stack() {

    }

    int getSize() {
        return q.size();
    }

    bool isEmpty() {
        bool temp = false;
        return temp = q.empty();
    }

    void push(int element) {
        topp = element;
        q.push(element);
    }

    int pop() {
        int n = q.size();
        n--;
        while (n >= 1) {
            q1.push(q.front());
            q.pop();
            n--;
        }

        int temp = -1;

        if (!q.empty()) {
            temp = q.front();
            q.pop();
        }


        if (q1.size() == 0) {
            topp = -1;
        }

        while (!q1.empty()) {
            q.push(q1.front());
            topp = q1.front();
            q1.pop();
        }

        return temp;

    }

    int top() {
        if (topp == -1 or q.size() == 0) {
            return -1;
        } else {
            return topp;
        }
    }
};