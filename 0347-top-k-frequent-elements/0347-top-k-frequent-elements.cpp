bool compare(pair<int,int>& a, pair<int,int>& b)
{
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (auto num : nums) {
            freq[num]++;
        }
        vector<pair<int, int>> arr;
        for (auto& i : freq) {
            arr.push_back(i);
        }
        sort(arr.begin(), arr.end(), compare);
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};