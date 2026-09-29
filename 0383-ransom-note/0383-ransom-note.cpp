class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int n = magazine.length();
        for(int i = 0 ; i < n ; i++)
            mp[magazine[i]]++;
        int m = ransomNote.size();
        for(int i = 0 ;  i < m ; i++){
            mp[ransomNote[i]]--;
            if(mp[ransomNote[i]]<0)return false ;
        }
        return true ;
        
    }
};