class Solution {
public:
    int minimumLength(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (s[i] != s[j])
                break;

            while (i < j && s[i] == s[i + 1])
                i++;

            i++;

            while (i < j && s[j] == s[j - 1])
                j--;

            j--;
        }
        int ans = j-i+1;
        if (ans == -1) return 0 ;
        else return ans ;
        
    }
};