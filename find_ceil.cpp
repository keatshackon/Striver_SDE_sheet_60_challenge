#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *root, int x) {


    int ans = INT_MAX;

    while (root != NULL) {
        if (root->data == x) {
            return x;
        } else if (root->data < x) {
            root = root->right;
        } else {
            ans = root->data;
            root = root->left;
        }
    }

    if (ans == INT_MAX) return -1;

    return ans;
}