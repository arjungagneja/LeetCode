class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, n = nums.size(), r = n - 1, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[l] == nums[mid] && nums[r] == nums[mid]) {
                l++;
                r--;
            }
            else if (nums[mid] >= nums[l]) {
                if (target >= nums[l] && target < nums[mid]) r = mid - 1;
                else l = mid + 1;
            }
            else if (nums[mid] <= nums[r]) {
                if (target > nums[mid] && target <= nums[r]) l = mid + 1;
                else r = mid - 1;
            }
        }
        return false;
    }
};