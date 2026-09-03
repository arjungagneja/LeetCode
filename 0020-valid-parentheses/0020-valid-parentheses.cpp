bool matches(char top, char ch) {
    if (top == '(' && ch == ')') {
        return true;
    }
    else if (top == '[' && ch == ']') {
        return true;
    }
    else if (top == '{' && ch == '}') {
        return true;
    }
    else {
        return false;
    }
}

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                if (!st.empty()) {
                    char top = st.top();
                    if (matches(top, ch)) {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }
        if (st.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};