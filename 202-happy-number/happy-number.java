class Solution {
 public boolean isHappy(int n) {
        int i = 0;
        long sum = 0;
        HashSet<Integer> hs = new HashSet<>();
        while (n != 1) {
            while (n > 0) {
                int rem = n % 10;
                sum += 1L * rem * rem;
                n /= 10;
            }
            n = (int) sum;
            if (!hs.contains(n)) hs.add(n);
            else return false;
            sum = 0;
        }

        return true;
    }
}
