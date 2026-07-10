//Back-end complete function Template for C++

class Solution {
    unordered_map<string, bool> dp;
  public:
    bool isScramble(string s1, string s2) {
        // code here
        
        if (s1 == s2)
        return true;
        if (s1.length() != s2.length())
            return false;
        string key = s1 + " " + s2;
        if (dp.find(key) != dp.end())
            return dp[key];
        string a = s1, b = s2;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    
        if (a != b)
            return dp[key] = false;
    
        int n = s1.length();
        for (int i = 1; i < n; i++) {
            if (isScramble(s1.substr(0, i), s2.substr(0, i)) &&
                isScramble(s1.substr(i), s2.substr(i)))
                return dp[key] = true;

            if (isScramble(s1.substr(0, i), s2.substr(n - i)) &&
                isScramble(s1.substr(i), s2.substr(0, n - i)))
                return dp[key] = true;
        }
    
        return dp[key] = false;
        
    }
};
