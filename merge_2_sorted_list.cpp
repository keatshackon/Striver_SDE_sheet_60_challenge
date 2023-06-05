#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {


    Node<int> *h1 = first;
    Node<int> *h2 = second;

    Node<int> *ans = new Node<int>(-1);
    Node<int> *res = ans;

    while (h1 != NULL and h2 != NULL) {
        if (h1->data < h2->data) {
            ans->next = h1;
            ans = h1;
            h1 = h1->next;
            ans->next = NULL;
        } else {
            ans->next = h2;
            ans = h2;
            h2 = h2->next;
            ans->next = NULL;
        }
    }


    while (h1 != NULL) {
        ans->next = h1;
        ans = h1;
        h1 = h1->next;
        ans->next = NULL;
    }

    while (h2 != NULL) {
        ans->next = h2;
        ans = h2;
        h2 = h2->next;
        ans->next = NULL;

    }

    return res->next;

}
