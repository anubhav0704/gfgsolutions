class Solution {
    public int kthElement(int a[], int b[], int k) {
        // code here
        int m=a.length;
        int n=b.length;
        int val=0;
        int [] arr=new int[m+n];
        for(int i=0;i<m;i++){
            arr[i]=a[i];
        }
        for(int i=0;i<n;i++){
            arr[i+m]=b[i];
        }
        Arrays.sort(arr);
        for(int i=0;i<m+n;i++){
            if(i==k-1) val=arr[i];
        }
        return val;
    }
}