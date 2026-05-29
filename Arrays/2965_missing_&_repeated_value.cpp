class Solution {
public: // check note
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        vector<int>ans;
        int a, b;
        unordered_set<int>s;

        int act_sum = 0;
        for (int i = 0; i<n; i++)  {
            for (int j = 0; j<n; j++) {

                act_sum += grid[i][j]; // getting the actual sum

                if (s.find(grid[i][j]) != s.end()) { // num jodi already assign thake
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]); // one by one push hocche
            }
        }

        int exp_sum = (n*n) * (n*n + 1) /2;
        b = exp_sum + a - act_sum;
        ans.push_back(b);

        return ans;
    }
};