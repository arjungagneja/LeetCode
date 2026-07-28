class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int diff = 0;
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] > diff) diff = nums[i] - nums[i - 1];
        }
        return diff;
    }
};