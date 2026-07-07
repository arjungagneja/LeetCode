bool repeating(char* s, int beg, int end) {
    for (int i = beg; i <= end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (s[i] == s[j]) return true;
        }
    }
    return false;
}

int lengthOfLongestSubstring(char* s) {
    if (strlen(s) == 1) {
        return 1;
    }
    int i = 0, j = 1, max = 0;
    while (s[i] != '\0' && s[j] != '\0') {
        if (repeating(s, i, j) == false) {
            if (max < j - i + 1) {
                max = j - i + 1;
            }
            j++;
        }
        else {
            i++;
        }
    }
    return max;
}