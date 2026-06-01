class Solution {
public:

    int BS (vector<int>& arr, int tar, int st, int end) {
        if (st <= end) {
         int mid = st + (end-st) /2;

         if (arr[mid] == tar) return mid;
         else if (arr[mid] <= tar) {
            return BS(arr, tar, mid+1, end);
         } else {
            return BS(arr, tar, st, mid-1);
         }
        }
        return -1;
    }


    int search(vector<int>& arr, int tar) {
        int st = 0, end = arr.size()-1;

        return BS(arr, tar, st, end);
    }
};