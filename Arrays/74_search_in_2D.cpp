// all about Binary search in 2D array

class Solution {
public:

    bool search_(vector<vector<int>>& ma, int tar, int row) {
        int n = ma[0].size();

        int st = 0, end = n-1;

        while (st <= end) {
            int mid = st + (end-st) /2;

            if (tar == ma[row][mid]) {
                return true;
            } else if (tar > ma[row][mid]) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
        return false;
    }


    bool searchMatrix(vector<vector<int>>& ma, int tar) {
        int m = ma.size(), n = ma[0].size();
        int st = 0, end = m-1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (tar >= ma[mid][0] && tar <= ma[mid][n-1]) {
               return search_(ma, tar, mid);
            }
            else if (tar >= ma[mid][n-1]) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }

        return false;
    }
};