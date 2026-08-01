class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = nums[0];
        int high = nums[n-1];
        vector<int>res;
        for (int i = 2 ; i <= high ; i++){
            if(low % i ==0  and high % i == 0 ){
                res.push_back(i);
            }
        }
        if(res.size()!=0){
            return res[res.size()-1];
        }
        return 1 ;
    }
};