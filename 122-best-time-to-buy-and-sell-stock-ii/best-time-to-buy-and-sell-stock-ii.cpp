class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            if(prices[i] < prices[i+1]){
                ans += prices[i+1] - prices[i];
            }
        }
        // while(l < n && r < n){
        //     if(prices[l] < prices[r]){
        //         ans = max(ans, prices[r] - prices[l]);
        //         r++;
        //     }
        //     else l = r, r++;   
        // }
        return ans;
    }
};