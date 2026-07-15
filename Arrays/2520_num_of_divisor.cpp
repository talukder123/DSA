class Solution {
public:
    int countDigits(int num) {
        int ans = 0;

        string s = to_string(num);

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';

            if (num % digit == 0) {
                ans++;
            }
        }

        return ans;
    }
};