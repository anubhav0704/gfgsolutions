class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int m=q.size()/2;
        queue<int> st1;
        queue<int> st2;
        while(m--){
            st1.push(q.front());
            q.pop();
        }
        while(!q.empty()){
            st2.push(q.front());
            q.pop();
        }
        while(!st1.empty()){
            q.push(st1.front());
            st1.pop();
            q.push(st2.front());
            st2.pop();
        }
        
    }
};