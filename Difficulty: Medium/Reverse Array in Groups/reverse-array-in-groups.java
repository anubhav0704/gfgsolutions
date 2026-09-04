class Solution {
    public void reverse(int[] arr,int r,int i){
        while(i<=r){
            int temp=arr[i];
            arr[i]=arr[r];
            arr[r]=temp;
            i++;
            r--;
        }
    }
    
    public void reverseInGroups(int[] arr, int k) {
        // code here
        int n=arr.length;
        int i=0;
        while(i<=n){
            int r = Math.min(i + k - 1, n - 1);
            reverse(arr,r,i);
            i=i+k;
        }
        
    }
}