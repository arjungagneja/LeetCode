class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        int number = num, temp, ans = 0;
        while (number > 0) {
            temp = number % 10;
            nums.insert(nums.begin(), temp);
            number = number / 10;
        }
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 6) {
                nums[i] = 9;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            ans = ans + nums[i] * pow(10, n - i - 1);
        }
        return ans;
    }
};