class Solution {
public:
    int arrangeCoins(int n) {
        int num = n, k = 1, rows = 0;
        while (num > 0) {
            num = num - k;
            k++;
            rows++;
            if (num == k) {
                return rows + 1;
            }
        }
        if (n == 0) return 0;
        else if (n == 1) return 1;
        return rows - 1;
    }
};