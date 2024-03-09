class Solution {
public:
    int trap(vector<int>& A) {
        int n = A.size(), l = 0, r = n-1, lMax = 0, rMax = 0;
        int ans = 0;
        while(l <= r){
            if(A[l] <= A[r]){
                if(lMax < A[l]) lMax = A[l];
                else ans += lMax - A[l];
                l++;
            }
            else{
                if(rMax < A[r]) rMax = A[r];
                else ans += rMax - A[r];
                r--;
            }
        }
        return ans;
    }
};