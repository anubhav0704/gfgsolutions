class Solution {
    public void rearrange(int arr[]) {
        // code here
        int n=arr.length;
        Arrays.sort(arr);
        int[] ans=new int[n];
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=arr[r];
                r--;
            }
            else{
                ans[i]=arr[l];
                l++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
}
