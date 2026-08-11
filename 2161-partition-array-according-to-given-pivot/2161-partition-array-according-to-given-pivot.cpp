class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>pivless;
        vector<int>pivmore;
        vector<int>pivsame;
        int  n = nums.size();
        // find the index 
        int index = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]==pivot){
                index=i;
            }
        }
        for(int i =  0 ; i < n ; i++){
            if(nums[i]>pivot ) pivmore.push_back(nums[i]);
            else if(nums[i]<pivot ) pivless.push_back(nums[i]);
            else pivsame.push_back(nums[i]);
            
        }
        for(auto ele : pivsame){
            pivless.push_back(ele);
        }
        int m = pivmore.size();
        for(int i = 0 ; i < m ; i++){
            pivless.push_back(pivmore[i]);
        }
        return pivless ;
        
    }
};