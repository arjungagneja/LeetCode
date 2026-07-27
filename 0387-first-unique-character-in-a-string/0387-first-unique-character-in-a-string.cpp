class Solution {
public:
    int firstUniqChar(string s) {
        int alphabets[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            alphabets[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (alphabets[s[i] - 'a'] == 1) return i;
        }
        return -1;
    } 
};