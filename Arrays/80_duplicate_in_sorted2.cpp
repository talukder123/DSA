class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) return n;

        int temp = 2;

        for (int i = 2; i < n; i++) {
            if (nums[i] == nums[temp - 2]) {
                continue;
            }

            nums[temp] = nums[i];
            temp++;
        }

        return temp;
    }
};