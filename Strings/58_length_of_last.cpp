class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();

     reverse(s.begin(), s.end());


       int i = 0, count  = 0;
        while (s[i] == ' ') {
            i++;
        }

        while ( i < n && s[i] != ' ') {
            count++;
            i++;
        }
        
        return count;
    }
};