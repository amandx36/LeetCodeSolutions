class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // make the first window 
        long long  n  =  nums.size();
        long long  maxSum = 0 ;
        long long  addition  = 0 ;
        for(int i = 0 ; i < k  ;   i++){
             addition  +=nums[i]; 
        }
        maxSum = addition;
        // now for the rest one 
        for(int right = k ; right < n ; right++){
            addition += nums[right] ;    // entering element 
            addition -= nums[right-k]  ;   // left dude !! 
            maxSum = max(maxSum , addition);
        }

        return (double) maxSum/k;
        
        
    }
};