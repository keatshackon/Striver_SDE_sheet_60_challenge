#include <bits/stdc++.h>
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
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

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {



    if (root1 == NULL and root2 == NULL) {
        return 1;
    } else if (root1 == NULL and root2 != NULL or root1 != NULL and root2 == NULL) {
        return 0;
    }


    if (root1->data != root2->data) {
        return 0;
    }

    return identicalTrees(root1->left, root2->left) and
           identicalTrees(root1->right, root2->right);

}