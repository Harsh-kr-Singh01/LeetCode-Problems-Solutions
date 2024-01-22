class Solution {
    public boolean isHappy(int n) {
        int i = 0;
        long sum = 0;

        while (n != 1) {
            if (i >= 100000) {
                return false;
            }
            
            while (n > 0) {
                int rem = n % 10;
                sum += 1L * rem * rem;
                n /= 10;
            }

            n = (int) sum;
            sum = 0; 
            i++;
        }

        return true;
    }
}
