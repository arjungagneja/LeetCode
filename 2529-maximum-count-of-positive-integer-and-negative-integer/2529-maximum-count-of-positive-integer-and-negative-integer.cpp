class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0;
        for (int i: nums) {
            if (i > 0) pos++;
            if (i < 0) neg++;
        }
        if (pos > neg) return pos;
        else return neg;
    }
};