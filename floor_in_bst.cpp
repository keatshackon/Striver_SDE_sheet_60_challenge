#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int x) {


    int ans = 0;
    while (root != NULL) {
        if (root->val == x) {
            return x;
        } else if (root->val > x) {
            root = root->left;
        } else {
            ans = root->val;
            root = root->right;
        }
    }


    return ans;

}