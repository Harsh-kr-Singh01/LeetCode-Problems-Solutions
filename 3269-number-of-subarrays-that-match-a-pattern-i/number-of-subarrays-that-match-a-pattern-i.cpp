class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int len = pattern.size() + 1;
        int ans = 0;
        for (int i = 0; i <= nums.size() - len; i++) {
            bool turn = true;
            for (int j = i, k = 0; j < i + len - 1; j++, k++) {
                if (pattern[k] == 1 && (nums[j] >= nums[j + 1])) {
                    turn = false;
                } else if (pattern[k] == -1 && (nums[j] <= nums[j + 1])) {
                    turn = false;
                } else if (pattern[k] == 0 && (nums[j] > nums[j + 1] || nums[j] < nums[j + 1])) {
                    turn = false;
                }
            }
            if (turn) {
                ans++;
            }
        }
        return ans;
    }
};
