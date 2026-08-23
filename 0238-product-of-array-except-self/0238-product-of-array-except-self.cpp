class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> products(n, 1);
        vector<int> productsr(n, 1);
        // left side products
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                products[0] = 1;
            }
            else {
                products[i] = nums[i - 1] * products[i - 1];
            }
        }
        // right side products
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                products[n - 1] = products[n - 1] * 1; 
            }
            else {
                products[i] = right * products[i];
            }
            right = right * nums[i];
        }
        return products;
    }
};