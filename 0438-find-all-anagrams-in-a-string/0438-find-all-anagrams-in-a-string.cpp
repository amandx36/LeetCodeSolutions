class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int k = p.length();
       int n = s.length();
       map<char,int>pattern;
       map<char,int>window;
       vector<int>ans;
       // put the pattern and the first window
        for(int i = 0 ; i < k ; i++){
            pattern[p[i]]++;
            window[s[i]]++;
        }
        
        // process the first window
        if(pattern==window)ans.push_back(0);
        for(int i = k ; i < n ; i++){
            // remove the left element 
            window[s[i-k]]--;
            if(window[s[i-k]]==0)window.erase(s[i-k]);
            window[s[i]]++;
            if(pattern==window)ans.push_back(i-k+1);
        }
        return ans ;
    }
};