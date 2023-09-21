class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(nums[0] > x && nums[nums.size()-1] > x) return -1;
        int sum = 0,i = 0, ans = INT_MAX;
        while(i < nums.size() && sum <= x){
            sum += nums[i++];
        }
        if(i >= nums.size()){
            if(sum == x) return nums.size();
            else if(sum < x) return -1;
        }
        i--;
        int j = nums.size(), count =0;
        while(i >= -1 && j >= 0){
            if(i == -1 && sum > x){
                return ans;
            }
            if(i == -1 && sum == x){
                count = nums.size()-j;
                ans = min(ans,count);
                return ans;
            }
            if(sum == x){
                count = i+1 + nums.size()-j;
                ans = min(ans,count);
                // Remove the ith element
                sum -= nums[i--];
                // Include jth element
                sum += nums[--j];
            }
            else if(sum < x){
                sum += nums[--j];
            }
            else{
                sum -= nums[i--];
            }
        }
        return ans;
    }
};