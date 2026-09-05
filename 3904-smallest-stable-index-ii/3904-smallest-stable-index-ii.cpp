class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       if(nums.size()<=0) return -1 ;
       // sufix 
       vector<int>mx ;
       mx.push_back (nums[0]);
       int  n = nums.size();
       for( int i  = 1 ; i < n ; i++){
            int len = max(nums[i],mx[i-1]);
            mx.push_back(len);
       }
       // prefix max 
       vector<int>mn;
       mn.push_back(nums[n-1]);
       for(int i = n - 2 ; i >= 0 ; i--){
        int len = min(nums[i],mn.back());
        mn.push_back(len);
       }
       reverse(mn.begin(),mn.end());
       for(int i = 0 ; i < n ; i++){
        nums[i]=  mx[i]-mn[i];
        if(nums[i]<=k) return i;
       }
       return -1 ;
    }
};