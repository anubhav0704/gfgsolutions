class Solution {
    public ArrayList<Integer> getMinMax(int[] arr) {
        // code Here
        int n=arr.length;
        int mini=arr[0];
        int maxi=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return new ArrayList<>(Arrays.asList(mini,maxi));
    }
}
