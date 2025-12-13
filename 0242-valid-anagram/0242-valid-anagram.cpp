class Solution {
public:
    bool isAnagram(string s, string t) {

       
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> freq;

        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];    
            freq[ch] = freq[ch] + 1; 
        }

       
        for (int i = 0; i < t.length(); i++) {
            char ch = t[i];

            
            if (freq.find(ch) == freq.end())
                return false;

            freq[ch] = freq[ch] - 1;

            
            if (freq[ch] == 0)
                freq.erase(ch);
        }

       if (freq.size()>0) return false ;
        return freq.empty();
    }
};
