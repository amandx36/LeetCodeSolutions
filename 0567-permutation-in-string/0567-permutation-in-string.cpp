class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       map<char,int>pattern , window;
       // first window
       int k = s1.length();
       int n = s2.length();
       if(k>n) return false ;
       // first window 
       for(int i = 0 ; i < k ; i++){
        pattern[s1[i]]++;
        window[s2[i]]++;
       } 
       if(pattern==window) return true ;
       // move in the window 
       for(int i = k ; i < n ; i++){
        // left element 
        window[s2[i-k]]--;
        if(window[s2[i-k]]==0)window.erase(s2[i-k]);
        window[s2[i]]++;
        if(window==pattern)return true ;
       }
       return false ;
    }
};