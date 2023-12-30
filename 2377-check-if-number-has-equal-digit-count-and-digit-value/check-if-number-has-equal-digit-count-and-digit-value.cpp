class Solution {
public:
    bool digitCount(std::string num) {
        int n = num.length();
        vector<int> counts(n, 0);         
        for (int i = 0; i < n; ++i) {
            int digit = num[i] - '0'; 
            if (digit >= n) {
                return false; 
            }
            counts[digit]++; 
        }        
        for (int i = 0; i < n; ++i) {
            if (counts[i] != (num[i] - '0')) {
                return false; 
            }
        }        
        return true; 
    }
};
