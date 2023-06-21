#include <bits/stdc++.h>
/************************************************************
    Following is the Binary Search Tree node structure

    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void solve(TreeNode<int>* root, int k, priority_queue<int, vector<int>, greater<int>>&pq, int &cnt) {

    if (root == NULL) {
        return;
    }

    if (pq.size() < k) {
        pq.push(root->data);
    } else {
        if (root->data > pq.top()) {
            pq.pop();
            pq.push(root->data);
        }
    }

    cnt++;
    solve(root->left, k, pq, cnt);
    solve(root->right, k, pq, cnt);

}


int KthLargestNumber(TreeNode<int>* root, int k) {


    priority_queue<int, vector<int>, greater<int>>pq;
    int cnt = 0;


    solve(root, k, pq, cnt);

    if (cnt < k) {
        return -1;
    }

    return pq.top();

}
