class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        vector<string> ans;
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        sort (people.begin(), people.end(), greater<>());
        for (auto j : people) {
            ans.push_back(j.second);
        }
        return ans;
    }
};