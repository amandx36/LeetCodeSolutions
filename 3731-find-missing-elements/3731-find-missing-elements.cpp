class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        sort(nums.begin(),nums.end());
        int st = nums[0];
        int ld = nums[n-1];
       unordered_set<int>set;
       for(int i = 0 ; i < n ; i++){
        set.insert(nums[i]);
       }
        while(st!=ld){
            if(set.find(st)==set.end()){
                res.push_back(st);
            }
            st++;
        }
        return res ;
    }
};