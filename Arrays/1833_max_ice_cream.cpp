class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = 0;
        int cst = coins;
        int n = costs.size();
        sort(costs.begin(), costs.end());

        for (int i=0; i<n; i++) {

            if (cst < costs[i]) {
                break;
            }

            cst = cst - costs[i];
            ans++;
        }

        return ans;
    }
};