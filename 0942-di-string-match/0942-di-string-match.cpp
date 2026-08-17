class Solution {
public:
    vector<int> diStringMatch(string s) {
        int  n = s.length();
        vector<int>digi;
        for(int i = 0 ; i <= n ; i++){
            digi.push_back(i);
        }
        int left = 0 ;
        int right = n;
        vector<int>ans ;
        for(int i  = 0 ; i < n ; i++){
            if(s[i]=='I'){
                ans.push_back(digi[left]);
                digi[left]=-1;
                left++;
            }
            if(s[i]=='D'){
                ans.push_back(digi[right]);
                digi[right]=-1;
                right--;
            }
            
        }
        for(int i = 0 ; i <=n ; i++){
            if(digi[i]!=-1){
                ans.push_back(digi[i]);
            }
        }
        return ans;
    }
};