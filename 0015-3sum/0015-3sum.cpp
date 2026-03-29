class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


      // method 01 using map 


      // vector<vector<int>> mainAns;
      // for (int i = 0 ; i < nums.size(); i++){
      //   unordered_map<int, int >mp ;
      //   for(int j = i+1 ; j < nums.size();j++){
      //     int rem = nums[i] - nums[j];
      //     if(mp.find(rem)!=mp.end()){
      //       vector<int>ans;
      //       ans.push_back(i);
      //       ans.push_back(j);
      //       ans.push_back(mp[rem]);
      //       mainAns.push_back(ans);
      //     }
      //     else {
      //      mp.insert({nums[j],j});
      //     }
      //   }
      // }
      // return mainAns;
      

      // method 2 using 2 pointer 


      sort(nums.begin(),nums.end());
      vector<vector<int>> mainAns;
      

      for(int i   = 0   ; i < nums.size() - 2  ;i++){
        
        int j = i  + 1 ;
        int k = nums.size() -1 ;
        if (i >  0   and  nums[i]==nums[i-1])  continue;
        while(j<k){

         
          if(nums[i]+nums[j]+nums[k]==0 ){
            vector<int>ans;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            ans.push_back(nums[k]);
            mainAns.push_back(ans);
            
           j++;
           k--;
            // moving forward until j is repeating 
             
          while(j<k and nums[j]==nums[j-1]) j++ ;
          while(k>j and nums[k]==nums[k+1]) k-- ;
           
          }
          else if (nums[i]+nums[j]+nums[k]>0){
            k--;
          }
          else j++;
        }
      }

      return mainAns;  
    }
};