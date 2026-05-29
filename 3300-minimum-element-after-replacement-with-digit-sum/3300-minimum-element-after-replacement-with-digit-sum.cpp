class Solution {
public:

    int sumReturner(int n ){
        int sumer = 0 ;
        while(n>0){
            sumer += n%10;
            n /=10;
        }
        return sumer ;
    }
    int minElement(vector<int>& nums) {
        for(int i = 0 ; i < nums.size();i++){
            nums[i] = sumReturner(nums[i]);
        }
        int minNumber = INT_MAX;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]<minNumber) minNumber=nums[i];
        }
        return minNumber;
        
    }
};