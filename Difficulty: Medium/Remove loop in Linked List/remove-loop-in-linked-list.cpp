/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* temp1=head;
        Node* temp2=head;
        while(temp2!=nullptr && temp2->next!=nullptr){
            temp1=temp1->next;
            temp2=temp2->next->next;
            if(temp1==temp2) break;
        }
        
        if(temp2 == nullptr || temp2->next == nullptr) return;
        temp1=head;
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp2->next!=temp1){
            temp2=temp2->next;
        }
        temp2->next=nullptr;
    }
};