class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int max = nums[nums.size() - 1];
        int min = nums[0];
        int n = 1, i = 0,temp = n + min;
        vector<int> ans;
        while(temp<max)
        {
            temp = n + min;
            if (binary_search(nums.begin(), nums.end(), temp)) {
                n++;
            }
            else {
                ans.push_back(temp);
                n++;
            }

        }
        return ans;
    }
};