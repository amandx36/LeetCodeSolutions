class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        if(n<0) return n ;
        sort(nums.begin(),nums.end());
        int ld = nums[n-1];
        for (int i = 0 ; i < ld ; i++){
            if((nums[i]^i) != 0 ) return i ;
        }
        return  n ;
    }
};