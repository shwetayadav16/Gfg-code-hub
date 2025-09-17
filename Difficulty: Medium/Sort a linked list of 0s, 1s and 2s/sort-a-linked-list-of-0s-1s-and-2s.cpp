/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node*zerohead=new Node(-1);
        Node*onehead=new Node(-1);
        Node*twohead=new Node(-1);
        
        Node*zero=zerohead;
        Node*one=onehead;
        Node*two=twohead;
        
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zero->next=temp;
                zero=zero->next;//i.e temp also
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        zero->next=(onehead->next!=NULL)?onehead->next:twohead->next;
        one->next=twohead->next;
        two->next  = NULL; 
        return zerohead->next;
        
    }
};