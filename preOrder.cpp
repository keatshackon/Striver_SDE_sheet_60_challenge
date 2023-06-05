#include <bits/stdc++.h>

void solve(TreeNode *root, vector<int>&ans) {

    if (root == NULL) {
        return;
    }
    ans.push_back(root->data);
    solve(root->left, ans);
    solve(root->right, ans);

}

vector<int> getPreOrderTraversal(TreeNode *root) {

    vector<int>ans;
    solve(root, ans);
    return ans;
}