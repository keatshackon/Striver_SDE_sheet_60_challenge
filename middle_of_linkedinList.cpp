/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {


    Node* slow = head;
    Node* fast = head;


    while (fast != NULL and fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }


    return  slow;
}
