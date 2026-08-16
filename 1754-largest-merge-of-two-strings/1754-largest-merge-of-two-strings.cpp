class Solution {
public:
    string largestMerge(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();

        int st1 = 0;
        int st2 = 0;

        string ans = "";

        while (st1 < len1 && st2 < len2) {

            if (word1.substr(st1) > word2.substr(st2)) {
                ans += word1[st1];
                st1++;
            } else {
                ans += word2[st2];
                st2++;
            }
        }

        if (st1 < len1) {
            ans += word1.substr(st1);
        }

        if (st2 < len2) {
            ans += word2.substr(st2);
        }

        return ans;
    }
};