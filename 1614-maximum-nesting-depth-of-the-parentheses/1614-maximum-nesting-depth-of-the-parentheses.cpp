class Solution {
public:
    int maxDepth(string s) {
        int mxdep = 0 ;
        stack <char>st;
        for(auto ele : s){
            if(ele == '(' ) {
                st.push(ele);
                mxdep = max(mxdep, (int)st.size());
            }
            else if(ele==')') {
                if(st.empty()) return mxdep  ;
                else {
                    if(st.top()=='(' and ele != ')') return mxdep ;
                     st.pop();

                }

            }
        }
        return mxdep;
    }
};