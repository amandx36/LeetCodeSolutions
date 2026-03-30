class Solution {
public:
 // make a custom comprator for this dude 
        bool  static comp (pair<int,int>a,pair<int,int>b){
          return a.second>b.second;
        }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        vector <pair<int,int>>ans;
        for (auto ele : map){
        // num , frequency 
            ans.push_back({ele.first,ele.second});
         

        }
       
        sort(ans.begin(),ans.end(),comp);
        vector<int>mainAns;
        for (int i = 0 ; i < k  and i < ans.size();i++){
            mainAns.push_back(ans[i].first);

        }
        return mainAns ;

    }
};