/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {

     if (head == NULL or head->next == NULL or k == 0) {
          return head;
     }

     int cnt = 1;
     Node *temp = head;
     while (temp->next != NULL) {
          temp = temp->next;
          cnt++;
     }

     temp->next = head;

     k = k % cnt;
     k = cnt - k;

     while (k--) {
          temp = temp->next;
     }

     Node* ans = temp->next;
     temp->next = NULL;

     return ans;
}