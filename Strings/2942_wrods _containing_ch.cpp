class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) {
        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) {

            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] == x && (ans.empty() || ans.back() != i)) {
                    ans.push_back(i);
                } else {
                    continue;
                }
            }
        }

        return ans;
    }
};