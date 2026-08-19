class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {

        vector<string> word1, word2;
        int j = 0;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == ' ') {
                word1.push_back(s1.substr(j, i - j));
                j = i + 1;
            }
        }

        word1.push_back(s1.substr(j));


        j = 0;

        for (int i = 0; i < s2.length(); i++) {
            if (s2[i] == ' ') {
                word2.push_back(s2.substr(j, i - j));
                j = i + 1;
            }
        }

        word2.push_back(s2.substr(j));


        int n1 = word1.size();
        int n2 = word2.size();


       // making the samllest sentence 
        if (n1 > n2) {
            swap(word1, word2);
            swap(n1, n2);
        }

        int left = 0;

        while (left < n1 && word1[left] == word2[left]) {
            left++;
        }


        // right match 
        int right = 0;

        for (int i = n1 - 1; i >= left; i--) {

            if (word1[i] == word2[n2 - 1 - right]) {
                right++;
            }
        }


        return left + right == n1;
    }
};