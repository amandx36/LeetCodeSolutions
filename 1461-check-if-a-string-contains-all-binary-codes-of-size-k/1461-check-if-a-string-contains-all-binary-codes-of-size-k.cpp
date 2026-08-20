class Solution {
public:
    bool hasAllCodes(string s, int k) {
       int totalLen = pow(2,k);
       // first  window 
       unordered_set<string>st;
       int n = s.length();
       string window ;
      
       // traverse the window 
       for(int i = 0 ; i <= n-k ; i++){
            window = s.substr(i,k);
            st.insert(window);
       }
      
       // disply the element of the set 
       for(auto ele : st){
        cout<<ele<<" ";
       }
       //
       if(st.size()==totalLen)return true ;
       return false ;

    }
};