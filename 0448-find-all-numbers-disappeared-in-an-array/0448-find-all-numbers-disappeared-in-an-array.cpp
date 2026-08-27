class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] != 1 && nums[i + 1] - nums[i] != 0) {
                for (int j = 1; j < nums[i + 1] - nums[i]; j++) {
                    ans.push_back(nums[i] + j);
                }
            }
        }
        int last = nums[nums.size() - 1];
        for (int i = last + 1; i <= nums.size(); i++) {
            ans.push_back(i);
        }
        int first = nums[0];
        for (int i = 1; i < first; i++) {
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};