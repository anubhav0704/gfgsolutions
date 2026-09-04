class Solution {
    public void arrange(int[] arr) {
        // code here
        int n=arr.length;
        if(n<=1) return;
        int m=n;
        for(int i=0;i<n;i++){
            int ind=arr[i];
            int temp=arr[ind]%m;
            arr[i]=arr[i]+(temp*m);
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/m;
        }
    }
}