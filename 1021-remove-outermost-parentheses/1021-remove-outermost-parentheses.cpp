class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int n  =  s.length() ;
        string  ans ;
        for(int i =  0 ; i <n ;i++){
            if(s[i]=='('){
                if(st.size()>0){
                    ans = ans + s[i]; 
                }
                st.push(s[i]);
            }
            if(s[i]==')'){
                st.pop();
                if(st.size()>0){
                     ans = ans + s[i];
                }
            }
        }
        return ans ;
    }
};