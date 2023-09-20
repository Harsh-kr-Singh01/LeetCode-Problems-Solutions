class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max = 0, max_so_far = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            curr_max += nums[i];
            if(curr_max > max_so_far){
                max_so_far = curr_max;
            }
            if(curr_max < 0){
                curr_max = 0;
            }
        }
        return max_so_far;
    }
};