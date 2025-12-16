class Solution {
public:
// solving from the back 
    
    int helper (vector<int> &cost , int i , vector<int>&dp){
        if (i == 0  || i == 1 ) return cost[i];
        // if the fucntion call vlaue exist in the saved dp vector then return it 
        if(dp[i]!=-1) return dp[i];

        return dp[i] = cost[i] + min(helper(cost , i -1 , dp),helper(cost , i - 2 , dp)) ;

    }
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        vector<int> dp(n, -1 );
        int value = min(helper(cost,n-1,dp),helper(cost , n-2 , dp));
        return value ;
        
    }
};