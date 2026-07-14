/* Structure of a linked list Node
class Node {
  public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node *mergeResult(Node *head1, Node *head2) {
        // code here
        vector<int> arr;
        Node* temp=head1;
        while(temp!=nullptr){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        temp=head2;
        while(temp!=nullptr){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        Node* newNode=new Node(0);
        Node*curr=newNode;
        for(int i=arr.size()-1;i>=0;i--){
            curr->next=new Node(arr[i]);
            curr=curr->next;
        }
        return newNode->next;
    }
};
