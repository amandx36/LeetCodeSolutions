class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1)
            return false;
        stack<char> st;
        int length = s.size();
        for (int i = 0; i < length; i++) {
            if (s[i] == '(') {
                st.push('(');
            }
           else  if (s[i] == '{') {
                st.push('{');
            }
          else   if (s[i] == '[') {
                st.push('[');
            }
          else   if (s[i] == ')') {
                if (st.empty()) {
                    return false;
                }
                if(st.top()!='('){
                    return false;
                }
                if (st.top() == '(') {
                    st.pop();
                    continue;
                }
                
            }
         else    if (s[i] == '}') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '{') {
                    st.pop();
                    continue;
                }
                if(st.top()!='{'){
                    return false;
                }
            }
       else      if (s[i] == ']') {
                if (st.empty()) {
                    return false;
                }
                if (st.top() == '[') {
                    st.pop();
                    continue;
                }
                if(st.top()!='['){
                    return false;
                }
            }
        }
       if (st.size() == 0)
            return true;

        return false;
    }
};