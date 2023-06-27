#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* rev(LinkedListNode<int>*root) {

    if (root == NULL or root->next == NULL) {
        return root;
    }

    LinkedListNode<int>* temp = root;
    LinkedListNode<int>* res = root->next;
    root->next = NULL;

    while (res != NULL) {
        temp = res;
        res = res->next;
        temp->next = root;
        root = temp;
    }

    return temp;
}

bool isPalindrome(LinkedListNode<int> *head) {

    if (head == NULL or head->next == NULL) {
        return true;
    }


    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;
    LinkedListNode<int>* h1 = head;


    while (fast != NULL and fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    LinkedListNode<int>*h2 = rev(slow->next);
    slow->next = NULL;


    while (h1 != NULL and h2 != NULL) {
        if (h1->data != h2->data) {
            return false;
        }
        h1 = h1->next;
        h2 = h2->next;
    }


    return true;
}