class Solution {
public:
    
    void ps(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>> &final_ans ) {

        if ( i == nums.size()) {
         final_ans.push_back(ans);
         return;
        }

        // include
        ans.push_back(nums[i]);
        ps(nums, ans, i+1, final_ans);

        ans.pop_back(); // Backtracking


         // skipping index for the same values
        int idx = i+1;
        while (idx < nums.size() && nums[idx] == nums[idx-1]) {
            idx ++;
        }
        
        // exclude
        ps (nums, ans, idx, final_ans);


    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());


        vector<vector<int>> final_ans;
        vector <int> ans;

        ps(nums, ans, 0, final_ans);

        return final_ans;

    }
};