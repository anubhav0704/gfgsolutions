class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        // int n=arr.size();
        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int k1=k;
        //     int j=i;
        //     while (j < n) {
        //         if (arr[j] == 0) {
        //             if (k1 == 0)
        //                 break;
        //             k1--;
        //         }
        //         j++;
        //     }
        //     maxi=max(maxi,j-i);
        // }
        // return maxi;
        
        int left = 0;
        int zeros = 0;
        int ans = 0;

        for (int right = 0; right < arr.size(); right++) {
            if (arr[right] == 0)
                zeros++;

            while (zeros > k) {
                if (arr[left] == 0)
                    zeros--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
