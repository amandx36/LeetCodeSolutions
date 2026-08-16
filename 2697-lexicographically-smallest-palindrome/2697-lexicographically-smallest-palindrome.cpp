class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0 ;
        int right = s.length()-1;
        while(left<right){
            char c = min(s[left],s[right]);
            s[left] = c ;
            s[right] = c ;
            left++;
            right--;
        }
        return s ;
    }
};