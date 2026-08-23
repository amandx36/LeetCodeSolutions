class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0 ;
        int ans =  0 ;
        int n  = s.length();
        map<char,int>mp;
        int maxf = 0 ;
        for(int right = 0 ; right< n  ; right++){
            // expand 
            mp[s[right]]++;
            // shrink
            maxf =  max(maxf,mp[s[right]]);
            while((right-left+1)-maxf > k){
                mp[s[left]]--;
                left++;
            } 
            // compare 
            ans = max(ans,right - left +1 );
        }
        return ans ;
    }
};