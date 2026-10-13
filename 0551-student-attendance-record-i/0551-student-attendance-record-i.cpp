class Solution {
public:
    bool checkRecord(string s) {
        int p = 0, a = 0, l = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L' && i + 2 < n) {
                if (s[i + 1] == 'L' && s[i + 2] == 'L') return false;
            }
            if (s[i] == 'P') p++;
            else if (s[i] == 'A') a++;
        }
        if (a < 2) return true;
        else return false;
    }
};