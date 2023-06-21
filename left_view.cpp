#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{

    if (root == NULL) {
        return {};
    }
    vector<int>ans;
    queue<TreeNode<int>*>q;
    q.push(root);

    while (!q.empty()) {

        int n = q.size();
        int f = 0;

        while (n--) {
            TreeNode<int>* res = q.front();
            q.pop();
            if (f == 0) {
                ans.push_back(res->data);
                f = 1;
            }

            if (res->left) {
                q.push(res->left);
            }

            if (res->right) {
                q.push(res->right);
            }
        }
    }

    return ans;
}