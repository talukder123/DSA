class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> ar(n);
        
        ar[0] = arr[0];
        for (int i = 1; i < n; i++) {
            ar[i] = ar[i - 1] + arr[i];
        }
        
        return ar;
    }
};