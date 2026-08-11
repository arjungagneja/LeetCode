class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int lsum = 0, total = 0;
        for (int num : nums) {
            total = total + num;
        }
        for (int i = 0; i < n; i++) {
            int rsum = total - lsum - nums[i];
            if (lsum == rsum) {
                return i;
            }
            lsum = lsum + nums[i];
        }
        return -1;
    }
};