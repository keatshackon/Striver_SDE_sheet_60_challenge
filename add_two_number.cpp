/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node *addTwoNumbers(Node *num1, Node *num2) {


    Node *n1 = num1;
    Node *n2 = num2;


    Node *ans = new Node(-1);
    Node *res = ans;
    int carry = 0;


    while (n1 != NULL and n2 != NULL) {

        carry += n1->data;
        carry += n2->data;

        if (carry >= 10) {
            Node *temp = new Node(carry % 10);
            carry = carry / 10;
            ans->next = temp;
            ans = temp;
        } else {
            Node *temp = new Node(carry);
            carry = 0;
            ans->next = temp;
            ans = temp;
        }
        n1 = n1->next;
        n2 = n2->next;
    }

    while (n1 != NULL) {
        carry += n1->data;

        if (carry >= 10) {
            Node *temp = new Node(carry % 10);
            carry = carry / 10;
            ans->next = temp;
            ans = temp;
        } else {
            Node *temp = new Node(carry);
            carry = 0;
            ans->next = temp;
            ans = temp;
        }
        n1 = n1->next;
    }

    while (n2 != NULL) {
        carry += n2->data;

        if (carry >= 10) {
            Node *temp = new Node(carry % 10);
            carry = carry / 10;
            ans->next = temp;
            ans = temp;
        } else {
            Node *temp = new Node(carry);
            carry = 0;
            ans->next = temp;
            ans = temp;
        }
        n2 = n2->next;
    }

    if (carry != 0) {
        Node *temp = new Node(carry);
        ans->next = temp;
        ans = temp;
    }
    return res->next;
}