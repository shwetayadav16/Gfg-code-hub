/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/
int helper(Node*temp){
    if(temp==NULL){
        return 1;
    }
    int carry=helper(temp->next);
    temp->data=temp->data+carry;
    if(temp->data<10){

        // Node*newNode= new Node(1);
        return 0;//carry return karna hai
    }
    temp->data=0;
    return 1;
}

class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
        int carry=helper(head);
        if(carry==1){
            Node*newNode= new Node(1);
            newNode->next=head;
            return newNode;
        }
        return head;
        // return head of list after adding one
    }
};