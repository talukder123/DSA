class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int bb = arr[0], mp = 0;

        for (int i = 1; i<n; i++) {
            if (arr[i] > bb) {
                mp = max(mp, arr[i] - bb);
            }
            bb = min(bb, arr[i]);
        }

        return mp;
    }

};