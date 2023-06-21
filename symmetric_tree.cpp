/*****************************************************

    Following is the Binary Tree node structure:

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

        ~BinaryTreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

******************************************************/

bool solve(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if (root1 ==  NULL and root2 == NULL) {
        return true;
    } else if (root1 != NULL and root2 == NULL or root1 == NULL and root1 != NULL) {
        return false;
    } else if (root1->data != root2->data) {
        return false;
    }

    return solve(root1->left, root2->right) and solve(root1->right, root2->left);


}


bool isSymmetric(BinaryTreeNode<int>* root) {

    BinaryTreeNode<int>* root1 = root;
    BinaryTreeNode<int>* root2 = root;
    return solve(root1, root2);
}















