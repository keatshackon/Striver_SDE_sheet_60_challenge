#include <bits/stdc++.h>
class Queue {
public:

    list<int>q;
    Queue() {
        // Implement the Constructor
    }

    bool isEmpty() {
        return q.size() == 0 ? true : false;
    }

    void enqueue(int data) {
        q.push_back(data);
    }

    int dequeue() {
        if (q.size() > 0) {
            int temp = q.front();
            q.pop_front();
            return temp;
        } else {
            return -1;
        }
    }

    int front() {
        if (q.size() > 0) {
            return q.front();
        } else {
            return -1;
        }
    }
};