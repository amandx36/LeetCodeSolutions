class Solution {
public:
    string removeDuplicates(string s) {
      stack<int>st;
      
      for(int i  = 0 ; i < s.size();i++){
        if(!st.empty()and st.top()==s[i]){
          st.pop();
        }
        else st.push(s[i]);
        
      }

      // now get the element from stack 
      string ans ;

      while(st.size()!=0){
        ans +=st.top();
        st.pop();
      }

      // now reverse to kar de bhaiiiiiii 
      reverse(ans.begin(),ans.end());
      return ans;


        
    }
};