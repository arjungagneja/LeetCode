bool isDivisible(int n, int t) {
    int mult = 1;
    while (n > 0) {
        int temp;
        temp = n % 10;
        n = n / 10;
        mult = mult * temp;
    }
    if (mult % t == 0) {
        return true;
    }
    else return false;
}

class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true) {
            if (isDivisible(n, t)) {
                return n;
            }
            else n++;
        }
    }
};