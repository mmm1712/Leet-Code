
/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/

class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        char matches[] = {'(', '[', '{', ')', ']', '}'};
        st.reserve(s.size() / 2);
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push_back(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (st.empty() || matches[c - '(' + 3] != st.back()) {
                    return false;
                }
                st.pop_back();
            }
        }
        
        return st.empty();
    }
};


