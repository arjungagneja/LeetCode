class Solution {
public:
    string truncateSentence(string s, int k) {
        int wordcount = 0;
        int index = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                wordcount++;
            }
            if (wordcount == k) {
                return s.substr(0, i);
            }
        }
        return s;
    }
};