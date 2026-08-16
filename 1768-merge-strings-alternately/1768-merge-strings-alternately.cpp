class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int s1 = 0;
      int s2 = 0;
      string s ="";
      while(s1<word1.length() && s2 < word2.length()){
            s+=word1[s1];
            s+=word2[s2];
            s1++;
            s2++;
      }  
      // if s1 left the words 
      while(s1<word1.length()){
        s+=word1[s1];
        s1++;
      }
      while(s2<word2.length()){
        s+=word2[s2];
        s2++;
      }
      return s;
    }
};