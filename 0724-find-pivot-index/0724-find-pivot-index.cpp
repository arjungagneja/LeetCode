class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int lsum = 0, rsum = 0;
            if (i == n - 1) rsum = 0;
            else {
                for (int j = i + 1; j < n; j++) {
                    rsum = rsum + nums[j];
                }
            }
            if (i == 0) lsum = 0;
            else {
                for (int j = i - 1; j >= 0; j--) {
                    lsum = lsum + nums[j];
                } 
            }
            if (lsum == rsum) {
                return i;
            }
        }
        return -1;
    }
};