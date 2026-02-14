class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>map;
      vector<int>answer;

      // put one vector into map 

      // by for each loop 
      for(auto ele:nums1){
        map[ele]++;
      }

      // iterate  to nums2
      // using for loop 
      for(int  i  = 0 ; i < nums2.size();i++){
        int element =  nums2[i];
        if(map[element]>0){
          answer.push_back(element);
          map[element]--;
        }
      }
      return answer;
        
    }
};