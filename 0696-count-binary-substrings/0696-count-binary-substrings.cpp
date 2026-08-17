class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>len;
        int n = s.length();
        int count = 1 ;
        for(int i = 1 ; i < n ; i++){
            if(s[i]!=s[i-1]){
                len.push_back(count);
                count = 1 ;
            }
            else count++;
        }
        len.push_back(count);
        int i = 0 ;
        int j = 1;
        int answer = 0 ;
        while(j<len.size()){
            answer += min(len[i],len[j]);
            i++;
            j++;
        }
        return answer ;
        
    }
};