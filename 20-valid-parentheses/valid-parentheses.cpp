class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch: s){
            if(ch == '['){
                st.push(']');
            }
            else if(ch == '('){
                st.push(')');
            }
            else if(ch == '{'){
                st.push('}');
            }
            else if(!st.empty() && st.top() == ch){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};