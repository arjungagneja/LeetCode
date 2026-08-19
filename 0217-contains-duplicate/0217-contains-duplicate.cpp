class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for (int i : nums) {
            if (freq.count(i)) return true;
            freq.insert(i);
        }
        return false;
    }
};