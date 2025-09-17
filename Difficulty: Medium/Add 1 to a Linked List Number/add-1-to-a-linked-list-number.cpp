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

class Solution {
  public:
  Node*reverse(Node*head){
      Node*temp;
      Node*prev=NULL;
      Node*curr=head;
      while(curr!=NULL){
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
      }
      return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        head=reverse(head);
        Node*temp=head;
        int carry=1;
        while(temp!=NULL){
            if(carry){
                int sum=temp->data=temp->data+carry;
                carry=sum/10;
                temp->data=sum%10;
            }
            temp=temp->next;
        }
        head=reverse(head);
        if(carry>0){
            Node*newNode= new Node(carry);
            newNode->next=head;
            head=newNode;
        }
        return head;
        // return head of list after adding one
    }
};