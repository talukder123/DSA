// #01 find all the ch freq of s1
// #02 find all the ch freq of s2
// #03 if equal then true, else false

class Solution {
public:

    bool isEql(int f[], int q[]) { // this function is using to check nu: #03
        for (int i = 0; i < 26; i++) {
            if (f[i] != q[i]) {
                return false;
            }
          }
        return true;
        }

    bool checkInclusion(string s1, string s2) {

        int freq[26] = {0}; // all the ch are from 'a' - 'z' || we count the frq of s2

        for (int i=0; i<s1.length(); i++) {
            freq[s1[i] - 'a'] ++ ;
        }

         int ws = s1.length(); // ws = window size;

        for (int i=0; i<s2.length(); i++) {
            int winIdx = 0, idx = i;

            int winfreq[26] = {0}; // here we count the frq of s2

            while (winIdx < ws && idx < s2.length()) {   // window size porjonto loop ta cholbe, edge cse er jonno idx cndtn use hocche
                winfreq[s2[idx] - 'a']++;
                winIdx++;
                idx++;
            }

            if (isEql(freq, winfreq)) {
                return true;
            }
        }
        return false;
    }
};