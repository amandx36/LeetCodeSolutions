class Solution {
public:
    bool canBeEqual(string s1, string s2) {
      // if(s1==s2) return true ;
      // string temp = s1 ;
      // for (int i = 0 ; i < 2 ; i ++){
      //  int j = i + 2 ;
      //  swap(s1[i],s1[j]);
      //  if (s1==s2) return true ;
      // }

      // swap(temp[1],temp[3]);
      // if (temp==s2) return true ;
      // return false ;
      

      // method 02 
      return (
            ( (s1[0] == s2[0] && s1[2] == s2[2]) ||
              (s1[0] == s2[2] && s1[2] == s2[0]) )
            &&
            ( (s1[1] == s2[1] && s1[3] == s2[3]) ||
              (s1[1] == s2[3] && s1[3] == s2[1]) )
        );
        
    }
};