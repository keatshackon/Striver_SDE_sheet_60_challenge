#include <bits/stdc++.h>
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void In(BinaryTreeNode<int>*root, vector<vector<int>>&ans) {
    if (root == NULL) {
        return;
    }

    In(root->left, ans);
    ans[0].push_back(root->data);
    In(root->right, ans);
}

void Pre(BinaryTreeNode<int>*root, vector<vector<int>>&ans) {
    if (root == NULL) {
        return;
    }
    ans[1].push_back(root->data);
    Pre(root->left, ans);
    Pre(root->right, ans);
}
void Post(BinaryTreeNode<int> *root, vector<vector<int>>&ans) {
    if (root == NULL) {
        return;
    }
    Post(root->left, ans);
    Post(root->right, ans);
    ans[2].push_back(root->data);
}


vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root) {

    vector<vector<int>>ans(3);

    In(root, ans);
    Pre(root, ans);
    Post(root, ans);

    return ans;
}