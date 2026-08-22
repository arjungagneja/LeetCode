class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i = 0, n = strs.size();
        string s = "";
        while (i < strs[0].length()) {
            if (strs[0][i] == strs[n - 1][i]) {
                s = s + strs[0][i];
            }
            else break;
            i++;
        }
        return s;
    }
};