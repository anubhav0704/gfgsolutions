class Solution {
  public:
  public:
    int fact(int n){
        if(n==0) return 1;
        return n*fact(n-1);
    }
    bool isStrong(int n) {
        // code here.
        int sum=0;
        int temp=n;
        while(temp>0){
            int digit=temp%10;
            sum+=fact(digit);
            temp=temp/10;
        }
        return sum==n;
    }
};
