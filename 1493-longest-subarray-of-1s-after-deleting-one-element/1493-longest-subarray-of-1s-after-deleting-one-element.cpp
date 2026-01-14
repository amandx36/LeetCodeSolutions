class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int flip = 0 ,  i = 0 , j = 0 ;
        int maxLen  = INT_MIN, len = INT_MIN;
        int k =  1 ;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flip<k){
                    flip++;
                    j++;

                }
                else{
                    // calculate length 
                    len = j - i ;
                    maxLen = max(maxLen,len) ;
                    // i ko just uske wale 0 se ek idx pahle le jaoo 
                    while(nums[i]==1) i++;
                    i++;
                    j++;



                }
            }
        }
        len = j -  i ;
         maxLen = max(maxLen,len) ;
         return maxLen - 1 ;


        
    }
};