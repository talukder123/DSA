class Solution {
public:
    string processStr(string s) {
        string ans = "";

        int n = s.length();
        for (int i=0; i<n; i++) {
            if (s[i]>= 'a' && s[i]<='z') {
                ans.push_back(s[i]);
            } else if (s[i] == '*') {
                if (ans.length() >= 1) {
                    ans.pop_back();
                }
            } else if (s[i] == '#') {
                ans += ans;
            } else if (s[i] == '%') {
                reverse(ans.begin(), ans.end());
            }
        }

        return ans;
    }
};