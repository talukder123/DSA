class Solution {
public:

void subsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &final_ans) {
    if (i == arr.size()) {
        final_ans.push_back({ans});
        return;
    }

    ans.push_back(arr[i]); // include
    subsets(arr, ans, i+1, final_ans);

    ans.pop_back(); // backtrack
    subsets(arr, ans, i+1, final_ans); // exclude
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> final_ans;
        vector<int>ans;

        subsets(nums, ans, 0, final_ans);
        return final_ans;
    }
};