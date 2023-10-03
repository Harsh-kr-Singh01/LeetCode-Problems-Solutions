class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int ans = 0;
        // for(int i = 0; i < nums.size()-1; i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j]) ans++;
        //     }
        // }
        // return ans;
        int maxi = *max_element(nums.begin(),nums.end()), j = 0;
        vector<int> freq(maxi+1); // Frequency vector
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] += 1;
        }
        // 1 2 3 1 1 3 5 2 5 1 3 --> nums
        // 0 4 2 3 0 2 --> Freq array
        int ans = 0;
        for(int i = 0; i < freq.size(); i++){
            ans += freq[i] * (freq[i] - 1) / 2;
        }
        return ans;
    }
};