public class Solution {
    public boolean digitCount(String num) {
        int n = num.length();
        int[] counts = new int[n]; // Initialize counts array with size n
        
        for (int i = 0; i < n; ++i) {
            int digit = num.charAt(i) - '0'; // Convert character to integer value
            if (digit >= n) {
                return false; // If the digit is out of range, return false
            }
            counts[digit]++; // Increment count for the digit at its index
        }
        
        for (int i = 0; i < n; ++i) {
            if (counts[i] != (num.charAt(i) - '0')) {
                return false; // If count doesn't match the digit at its index, return false
            }
        }
        
        return true; // All conditions hold true
    }
}
