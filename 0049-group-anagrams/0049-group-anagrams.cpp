class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> idk;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            idk[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto& gang : idk) {
            ans.push_back(gang.second);
        }
        return ans;
    }
};