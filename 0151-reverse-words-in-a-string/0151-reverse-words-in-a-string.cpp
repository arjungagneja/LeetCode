string findWord(string &s, int index) {
    string ss = "";
    while (s[index] != ' ' && index < s.size()) {
        ss = ss + s[index];
        index++;
    }
    return ss;
}

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 && s[i] != ' ') {
                string word = findWord(s, 0);
                words.push_back(word);
            }
            else if (i > 0 && s[i - 1] == ' ' && s[i] != ' ') {
                string word = findWord(s, i);
                words.push_back(word);
            }
        }
        for (int i = (int)words.size() - 1; i >= 0; i--) {
            ans = ans + words[i];
            if (i != 0) {
                ans = ans + " ";
            }
        }
        return ans;
    }
};