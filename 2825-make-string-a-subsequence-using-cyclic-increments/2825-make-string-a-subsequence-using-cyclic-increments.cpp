class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        
        int i = 0;
        int j = 0;

        while (i < str1.length() && j < str2.length()) {
            
            char nextChar = (str1[i] - 'a' + 1) % 26 + 'a';

            
            if (str1[i] == str2[j] || nextChar == str2[j]) {
                i++;
                j++;
            }
            else {
                
                i++;
            }
        }

      
        return j == str2.length();
    }
};