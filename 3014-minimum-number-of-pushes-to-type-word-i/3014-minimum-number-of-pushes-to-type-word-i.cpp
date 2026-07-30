class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        int n = word.size();
        for(int i = 0 ; i < n ; i++ ){
            mp[word[i]]++;
        }
        vector<int>freq;
        for( auto &ele : mp ){
            freq.push_back(ele.second);
        }
        int pushed   = 0  ;
        int m = freq.size();
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());
        for(int i = 0 ; i< m ; i++){
           pushed = pushed + (freq[i]*((i/8)+1)) ;
        }
        return  pushed;
        
    }
};