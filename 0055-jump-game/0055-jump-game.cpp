class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0 ; 
        for (int i  = 0 ; i < nums.size() ; i++){
            // check whether the maxReach variable pass it or not
            if(i>maxReach) return false ;

            // updating the maxReach 
            maxReach = max( maxReach , i+ nums[i]) ;

            // check it passes it or not dude 
            if(maxReach >= nums.size() -1  ) return true ;  
        }
        return true ;
    }
};