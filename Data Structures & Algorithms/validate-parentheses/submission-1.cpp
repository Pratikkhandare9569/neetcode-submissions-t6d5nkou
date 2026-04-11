class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (auto i : s) {
            if (i == '(' || i == '[' || i == '{') {
                st.push(i);
            } 
            else {
                if (st.empty()) return false;  // check before accessing top
                
                if ((i == ')' && st.top() == '(') ||
                    (i == ']' && st.top() == '[') ||
                    (i == '}' && st.top() == '{')) {
                    st.pop();
                } 
                else {
                    return false;  // mismatch case
                }
            }
        }
        
        return st.empty();
    }
};