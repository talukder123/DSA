class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int count;

        for (int i = 0 ; i < n ; i++) {
            while (nums[i] != 0) {
                count++;
                nums[i] = nums[i] / 10;
            }
            if (count % 2 == 0) {
                ans++;
            }
            count  = 0;
        }

        return ans;
    }
};