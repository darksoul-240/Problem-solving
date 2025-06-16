
class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false; // Nothing to match with
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false; // Mismatched closing bracket
                }
                st.pop(); // Valid match found
            }
        }
        return st.empty();
    }
};