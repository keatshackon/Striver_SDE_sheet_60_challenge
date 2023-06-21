/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead) {

    Node *myNode = new Node(-1e9);

    Node *head = firstHead;

    while (head != NULL) {
        if (head->next == myNode) {
            return head;
        } else {

            Node *temp = head;
            head = head->next;
            temp->next = myNode;

        }
    }

    head = secondHead;
    while (head != NULL) {
        if (head->next == myNode) {
            return head;
        } else {

            Node *temp = head;
            head = head->next;
            temp->next = myNode;
        }
    }

    return  NULL;

}