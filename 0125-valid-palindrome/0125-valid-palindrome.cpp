class Solution {
public:
    bool isPalindrome(string s) {
        string newOne = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                newOne += tolower(s[i]);
            }
        }

        int i = 0, j = newOne.size() - 1;

        while (i < j) {
            if (newOne[i] != newOne[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};