/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node*front;//prev node
        Node*current=head;
        while(current!=NULL){
            front=current->prev;
            current->prev=current->next;
            current->next=front;
            current=current->prev;
        }
        return front->prev;
    }
};