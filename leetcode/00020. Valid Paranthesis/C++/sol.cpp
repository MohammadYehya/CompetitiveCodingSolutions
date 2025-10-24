#include <stack>
#include <unordered_map>
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> match = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') st.push(c);
            else if (st.empty() || st.top() != match[c]) return false;
            else st.pop();
        }
        return st.empty();
    }
};