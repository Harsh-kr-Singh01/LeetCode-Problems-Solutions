/*
class Solution {
public:
    int merge(vector<int>& nums, int i, int mid, int j) {
        int inversions = 0;
        int leftSize = mid - i + 1;
        int rightSize = j - mid;

        vector<int> left(leftSize);
        vector<int> right(rightSize);

        for (int x = 0; x < leftSize; x++)
            left[x] = nums[i + x];
        for (int y = 0; y < rightSize; y++)
            right[y] = nums[mid + 1 + y];

        int x = 0, y = 0, k = i;
        while (x < leftSize && y < rightSize) {
            if (left[x] <= right[y]) {
                nums[k++] = left[x++];
            } else {
                nums[k++] = right[y++];
                inversions += (leftSize - x); 
            }
        }

        while (x < leftSize) {
            nums[k++] = left[x++];
        }
        while (y < rightSize) {
            nums[k++] = right[y++];
        }

        return inversions;
    }

    int mergeSort(vector<int>& nums, int i, int j) {
        if (i >= j) return 0; // Base case
        int mid = i + (j - i) / 2;
        int leftInversions = mergeSort(nums, i, mid);
        int rightInversions = mergeSort(nums, mid + 1, j);
        int mergeInversions = merge(nums, i, mid, j);
        return leftInversions + rightInversions + mergeInversions;
    }

    bool isIdealPermutation(vector<int>& nums) {
        int local = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) local++;
        }
        int global = mergeSort(nums, 0, nums.size() - 1);
        return global == local;
    }

    Above code is giving TLE on last two test cases.
};
*/

class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        int max_val = 0;

        for (int i = 0; i < n - 2; i++) {
            max_val = max(max_val, nums[i]);
            if (max_val > nums[i + 2]) {
                return false;
            }
        }

        return true;

/*
This approach iterates through the nums array and keeps track of the maximum value encountered so far. If at any point, the maximum value is greater than the element two positions ahead, it means there's a global inversion that's not a local inversion, and the function returns false. Otherwise, it returns true.

This approach has a time complexity of O(n) and avoids the need for sorting or merging, making it more efficient.
*/
    }
};

