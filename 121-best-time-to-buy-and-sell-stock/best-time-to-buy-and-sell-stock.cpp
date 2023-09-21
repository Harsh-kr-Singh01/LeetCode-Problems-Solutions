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
            // The main thing to understand is the l = r thing.
            // We need out left to be at lowest value.
            // So, if we are getting the r value even lower than
            // our current l, then we shall always update our 
            // l directly to r.
        }
        return ans;
    }
};