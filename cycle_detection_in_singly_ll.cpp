/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head) {


    Node *temp = head;
    Node *res = new Node(-1);

    while (temp != NULL) {
        if (temp == res) {
            return true;
        }
        Node *t = temp;
        temp = temp -> next;
        t->next = res;
    }

    return false;

}