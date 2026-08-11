class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        // make the  another copy 
        // method 01   tc n and sc n  
        int n = nums.size();
        vector<int>res = nums;
        int k = 1 ;
        int j = 0;
       
        for(int i = 0 ; i < n ; i++){
            if(nums[i]%2==0){
                res[j] = nums[i];
                j+=2;
            }
                if(nums[i]%2!=0){
                res[k] = nums[i];
                k+=2;
            }
        }
        return res ;
    }
};