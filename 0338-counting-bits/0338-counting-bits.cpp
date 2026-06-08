class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans ;
        ans.push_back(0);
        for(int i = 1 ; i <= n ; i++){
            int count = 0 ;
            int x = i ;
            while(x!=0){
                x = (x&(x-1));
                count++;
            }
            ans.push_back(count);
            
        }
    return ans ;
    }

};