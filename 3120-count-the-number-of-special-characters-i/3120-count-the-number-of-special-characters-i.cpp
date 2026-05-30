class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>small(27,0);
        vector<int>large(27,0);

        for(int i = 0 ; i < word.length();i++){
            if(word[i]>=65  and word[i]<=90) large[word[i]%32]++;
            else {
                small[word[i]%32]++;
            }
        }

         // check greater than 0 in both at  the same index 
         int result = 0 ;
         for(int i = 0 ; i <= 26 ; i++){
            if(large[i]>0 and small[i]>0) result++;
         }
         return result ;
        
    }
};