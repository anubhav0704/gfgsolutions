class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int m=a.size();
        int n=b.size();
        vector<int> arr;
        for(int i=0;i<m;i++){
            arr.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            arr.push_back(b[i]);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<m;i++){
            a[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            b[i]=arr[i+m];
        }
        
        arr.clear();
        
    }
};