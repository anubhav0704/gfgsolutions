/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        vector<int> arr;
        Node* temp1=root;
        while(temp1!=nullptr){
            Node*temp2=temp1;
            while(temp2!=nullptr){
                arr.push_back(temp2->data);
                temp2=temp2->bottom;
            }
            temp1=temp1->next;
        }
        sort(arr.begin(),arr.end());
        Node* temp=new Node(0);
        Node* curr=temp;
        for(int i=0;i<arr.size();i++){
            temp->bottom=new Node(arr[i]);
            temp=temp->bottom;
        }
        return curr->bottom;
    }
};