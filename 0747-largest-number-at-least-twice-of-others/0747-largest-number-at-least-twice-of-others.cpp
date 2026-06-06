class Solution {
public:
    int dominantIndex(vector<int>& nums) {



  int n = nums.size();
  int lg = INT_MIN;
  int index = -1;
  for (int i = 0; i < n; i++) {
      if(nums[i]>lg){
          lg = nums[i];
          index = i ;
      }
  }
  
  for (int i = 0; i < n; i++) {
    if (((nums[i] * 2) > lg) and i != index  ) {
      return -1;
    }
  }
 
  return index;




    }
};