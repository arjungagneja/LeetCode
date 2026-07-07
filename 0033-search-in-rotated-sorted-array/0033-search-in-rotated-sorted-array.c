int search(int* nums, int numsSize, int target) {
    if (numsSize == 0) return -1;
    if (numsSize == 1 && nums[0] == target) return 0;
    else if (numsSize == 1 && nums[0] != target) return -1;
    int beg = 0, end = numsSize - 1;
    while (beg <= end) {
        int mid = (beg + end) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[beg] <= nums[mid]) {
            if (nums[beg] <= target && nums[mid] > target) {
                end = mid - 1;
            }
            else beg = mid + 1;
        }
        else if (nums[mid] <= nums[end]) {
            if (nums[end] >= target && nums[mid] < target) {
                beg = mid + 1;
            }
            else end = mid - 1;
        }
    }
    return -1;
}