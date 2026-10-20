class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i == 0 && i + 1 < n) {
                if (nums[1] != nums[0])
                    sum += nums[0];
            }
            else if (i == n - 1 && i - 1 >= 0) {
                if (nums[i] != nums[i - 1]) 
                    sum += nums[i];
            }
            else if (i - 1 >= 0 && i + 1 < n && nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) 
                sum += nums[i];
        }
        return sum;
    }
};