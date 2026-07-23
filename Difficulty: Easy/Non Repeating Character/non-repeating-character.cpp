
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for (char c : s) {
            if (mp[c] == 1)
                return c;
        }
        return '$';
    }
};