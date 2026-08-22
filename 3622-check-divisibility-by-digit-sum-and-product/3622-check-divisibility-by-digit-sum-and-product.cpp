class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n, temp, sum1 = 0, prod1 = 1, sum2 = 0;
        while (num > 0) {
            temp = num % 10;
            prod1 = prod1 * temp;
            sum1 = sum1 + temp;
            num = num / 10;
        }
        sum2 = sum1 + prod1;
        if (n % sum2 == 0) return true;
        else return false;
    }
};