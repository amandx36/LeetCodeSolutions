class Solution {
public:
    int countGoodSubstrings(string s) {
        int k =  3 ;
        map<char,int>mp;
        int  count = 0 ;
        // first window 
        for(int i = 0 ; i < k ; i++){
            mp[s[i]]++;
        }
        // process the first window 
        if(mp.size()==3) count++;
        // process the whole one dude
        int n = s.length();
        for(int i = k ; i < n ; i++){
            // process the exit element ;
            mp[s[i-k]]--;
            if(mp[s[i-k]]==0)mp.erase(s[i-k]);
            // process first element 
            mp[s[i]]++;
            // process 
            if(mp.size()==k)count++;

        }
        return count ;
            
        
    }
};