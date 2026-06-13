class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string s = "";
        for (int i=0; i<words.size(); i++) {
            int temp = 0;

            for (int j=0; j<words[i].size(); j++) {
                int t = words[i][j] - 97;
                temp += weights[t];
            }

            int res = temp % 26;
            char ch = 'z' - res;

            s+= ch;
        }
    return s;

    }
};