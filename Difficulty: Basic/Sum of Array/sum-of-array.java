class Solution {
    public int arraySum(int arr[]) {
        // code here
        int n=arr.length;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
        
    }
}
