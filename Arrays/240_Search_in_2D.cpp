class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int m = arr.size(), n = arr[0].size();

        int r = 0;
        int c = n-1;

        while (r < m && c >= 0) {
            if (t == arr[r][c]) {
                return true;
            } else if (t < arr[r][c]) {
                c--;
            } else {
                r++;
            }
        }
         return false; 
    }
   
};