class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();

        int s_s = 0, d_s = 0;

        for (int i=0; i<n; i++) {
            if (nums[i] / 10 == 0) {
                s_s += nums[i];
            } else {
                d_s += nums[i];
            }
        }

        if (s_s > d_s || d_s > s_s) {
            return true;
        } else {
            return false;
        }
    }
};