class Solution {
    public:
        int trap(vector<int>& height) {
        int n = height.size(), lmax = height[0], rmax = height[0], sum = 0, index = 0;
        for (int i = 1; i < n; i++) {
            if (rmax < height[i]) {
                rmax = height[i];
                index = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            lmax = max(lmax, height[i]);
            if (i == 0) {
                continue;
            }
            else if (i == n - 1) {
                break;
            }
            else {
                if (i > index) {
                    rmax = height[n - 1];
                    for (int k = n - 1; k >= i; k--) {
                        rmax = max(rmax, height[k]);
                    }
                }
                sum = sum + min(lmax, rmax) - height[i];
            }
        }
        return sum;
    }
};