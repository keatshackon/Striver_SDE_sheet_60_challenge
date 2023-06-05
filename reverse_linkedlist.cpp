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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {


    if (head == NULL or head->next == NULL) {
        return head;
    }

    LinkedListNode<int> *temp = head, *h1 = head->next;

    head->next = NULL;

    while (h1 != NULL) {
        temp = h1;
        h1 = h1->next;
        temp->next = head;
        head = temp;
    }

    return temp;

}