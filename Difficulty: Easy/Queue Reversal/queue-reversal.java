class Solution {
    public void reverseQueue(Queue<Integer> q) {
        // code here
        Deque<Integer> stack=new ArrayDeque<>();
        while(!q.isEmpty()){
            stack.push(q.peek());
            q.poll();
        }
        while(!stack.isEmpty()){
            q.offer(stack.peek());
            stack.poll();
        }
    }
}