class Solution {
public:
    bool isValid(string ele) {
        stack<char>st;
        for(auto ele : ele){
            if(ele=='(' || ele=='{' || ele=='[') st.push(ele);
            else {
                if(st.empty()) return false ;
                else {
                    if((st.top()=='(' and ele!=')') 
                    || ((st.top()=='{' and ele!='}'))
                    ||  ((st.top()=='[' and ele!=']'))
                    )  return false ;
                    st.pop();
                }
            }
        }
       if(st.empty()) return true ;
       return false ;
    }
};