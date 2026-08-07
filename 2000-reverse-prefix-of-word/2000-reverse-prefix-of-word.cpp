class Solution {
public:
    string reversePrefix(string word, char ch) {
      int i = 0;
      int j = 0 ;

      for(j = 0 ; j < word.size();j++){
        if(ch==word[j]) break ;
      }  
      if(j==word.size()) return word;
      while(i<j){
        swap(word[i],word[j]);
        i++;
        j--;
      }
      return word;
    }
};