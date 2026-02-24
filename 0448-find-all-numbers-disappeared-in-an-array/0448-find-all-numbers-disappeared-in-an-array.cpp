class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // method 01  tc n and sc n

        // vector<int>ans;
        // unordered_set<int>bag(nums.begin(),nums.end());
        // for(int i = 1 ; i <= nums.size();i++){
        //   if(bag.find(i)==bag.end()){
        //     ans.push_back(i);
        //   }
        // }
        // return ans ;

        // method 02 tc :)  n and sc  :) 1
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            // check if this is not marked than mark it
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        // now push back the element which is +ve and add to the vector dude
        for(int i = 0 ; i < nums.size();i++){
          if(nums[i]>0){
            ans.push_back(i+1);
          }
        }
        return ans ;
    }
};
