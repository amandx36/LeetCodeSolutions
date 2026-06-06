class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        
        vector<int>dummy (n , 0);
        
        if(n<=1) return dummy  ;
        int sum = 0 ;
        vector<int>rightSum ;
        vector<int>leftSum;
       
        vector<int>ans ;
        rightSum.push_back(0);
        for(int i =  0 ; i < n  - 1 ; i++){
            sum = sum +  nums[i];
            rightSum.push_back(sum);

        }

        sum = 0 ;

         leftSum.push_back(0);
         reverse(nums.begin(),nums.end());
        for(int i =  0 ; i < n  - 1 ; i++){
            sum = sum +  nums[i];
            leftSum.push_back(sum);

        }
        reverse(leftSum.begin(),leftSum.end());
        for(int i = 0 ; i < n ; i++){
            int value = leftSum[i] - rightSum[i];
            if (  value < 0 )  value = -value;
            ans.push_back(value);
        }

        return ans ;
        
    }
};