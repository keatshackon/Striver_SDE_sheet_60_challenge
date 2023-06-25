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

void deleteNode(LinkedListNode<int> * node) {


    LinkedListNode<int>*temp = node;

    while (temp->next->next != NULL) {
        temp->data = temp->next->data;
        temp = temp->next;
    }

    temp->data =  temp->next->data;

    temp->next = NULL;

}