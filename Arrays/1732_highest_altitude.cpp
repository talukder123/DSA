class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        vector<int> ans(1, 0);

        int n = gain.size();

        for (int i=0; i<n; i++) {
            ans.push_back(ans.back() + gain[i]);
        }

        int x = ans[0];
        for (int i=0; i<ans.size(); i++) {
            if (ans[i] > x) {
                x = ans[i];
            }
        }

        return x;
    }
};