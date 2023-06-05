Node *firstNode(Node *head) {
    //    Write your code here.

    Node* fast = head;
    Node* slow = head;

    int f = 1;

    while (fast != NULL and fast->next != NULL) {
        slow  = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            f = 0;
            break;
        }
    }

    if (f == 1) {
        return NULL;
    }

    slow = head;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;

}