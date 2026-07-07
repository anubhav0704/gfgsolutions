class Solution {
public:
    void solve(int ind, string &s, set<string> &st) {
        if (ind == s.size()) {
            st.insert(s);
            return;
        }

        for (int i = ind; i < s.size(); i++) {
            swap(s[ind], s[i]);
            solve(ind + 1, s, st);
            swap(s[ind], s[i]);
        }
    }

    vector<string> findPermutation(string &s) {
        set<string> st;
        solve(0, s, st);

        return vector<string>(st.begin(), st.end());
    }
};