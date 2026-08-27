class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> ans;
        int sum = 0, sum2 = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }
        for (int i = 0; i < n; i++) {
            sum2 = sum2 + nums[i];
            sum = sum - nums[i];
            ans.push_back(nums[i]);
            if (sum2 > sum) {
                return ans;
            }
        }
        return ans;
    }
};