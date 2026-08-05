class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size(), temp;
        std::string tempn;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (heights[j] > heights[j + 1]) {
                    temp = heights[j + 1];
                    heights[j + 1] = heights[j];
                    heights[j] = temp;
                    tempn = names[j + 1];
                    names[j + 1] = names[j];
                    names[j] = tempn;
                }
            }
        }
        std::reverse(names.begin(), names.end());
        return names;
    }
};