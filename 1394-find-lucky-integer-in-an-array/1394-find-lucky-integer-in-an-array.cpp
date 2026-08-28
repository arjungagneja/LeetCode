class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        int lucky = -1;
        sort(arr.begin(), arr.end());
        for (int i : arr) {
            mp[i]++;
        }
        for (auto i : mp) {
            if (i.first == i.second) {
                lucky = i.first;
            }
        }
        return lucky;
    }
};