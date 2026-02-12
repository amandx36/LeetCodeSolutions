class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      // check is this condition is perfect or not 
      if(strs.size()==0) return "";
      string refrence =  strs[0];
      string answer ="";

      // now iterate to refrence string dude 
      for(int i  = 0 ; i < refrence.size();i++){
        // now check to every string character wise dude 
        for(int j  = 0  ; j < strs.size() ; j++){

          // condition 1   smaller in size to nahi hai as compared to refrence 
          if(i>=strs[j].size()) return answer;
          // condition 2   mismatch 
          if(refrence[i]!=strs[j][i]) return  answer ;

        }
        // all good now add the element 
        answer +=refrence[i];
      }
      return answer ;
        
    }
};