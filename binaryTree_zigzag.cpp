#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root) {

    if (root == NULL) {
        return {};
    }

    vector<int>ans;
    //ans.push_back(root->data);

    int f = 0;

    queue<BinaryTreeNode<int>*>q;
    q.push(root);

    while (!q.empty()) {

        int n = q.size();
        vector<int>t;

        while (n--) {
            BinaryTreeNode<int> *temp = q.front();
            q.pop();

            t.push_back(temp->data);

            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }

        if (f == 1) {
            for (int i = t.size() - 1; i >= 0; i--) {
                ans.push_back(t[i]);
            }
            f = 0;
        } else {
            for (auto q : t) {
                ans.push_back(q);
            }
            f = 1;
        }
    }

    return ans;
}
