class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> res;
        int n = nums.size();

        for (int i = 0; i < n; i += 2) {
            // Alice takes nums[i], Bob takes nums[i+1]
            res.push_back(nums[i + 1]);
            res.push_back(nums[i]);
        }

        return res;
    }
};