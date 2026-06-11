class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dig_sum = 0;
        int arr_sum = 0;

        for (int i=0; i<nums.size(); i++) {
            int temp = 0;
            if (nums.size() == 1) {
                dig_sum = nums[i];
                break;
            }

            int x = nums[i];

            while (x > 0) {
                temp = temp + x % 10;
                x /= 10;
            }

           dig_sum += temp;
        }

        for (int i=0; i<nums.size(); i++) {
            arr_sum += nums[i];
        }

        return abs(arr_sum - dig_sum);
        
    }
};