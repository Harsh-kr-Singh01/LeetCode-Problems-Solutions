class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0, r = 1, ans = 0;
        while(l < n && r < n){
            if(prices[l] < prices[r]){
                ans = max(ans, prices[r] - prices[l]);
                r++;
            }
            else l = r, r++;
        }
        return ans;
    }
};