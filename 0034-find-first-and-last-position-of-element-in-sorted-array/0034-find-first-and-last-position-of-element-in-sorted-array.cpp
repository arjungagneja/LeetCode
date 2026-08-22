class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2 , -1);
        // checking if the target is present on the left side as well if yes then put that first
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l)/2;
            if (nums[mid] == target) {
                ans[0] = mid;
                r = mid - 1;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        // now doing the same but for right side
        l = 0;
        r = n - 1;
        while (l <= r) {
            int mid = l + (r - l)/2;
            if (nums[mid] == target) {
                ans[1] = mid;
                l = mid + 1;
            }
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};