class Solution {
public:
    bool digitCount(std::string num) {
        int n = num.length();
        std::vector<int> counts(n, 0); // Initialize counts vector with size n and all counts as 0
        
        for (int i = 0; i < n; ++i) {
            int digit = num[i] - '0'; // Convert character to integer value
            if (digit >= n) {
                return false; // If the digit is out of range, return false
            }
            counts[digit]++; // Increment count for the digit at its index
        }
        
        for (int i = 0; i < n; ++i) {
            if (counts[i] != (num[i] - '0')) {
                return false; // If count doesn't match the digit at its index, return false
            }
        }
        
        return true; // All conditions hold true
    }
};
