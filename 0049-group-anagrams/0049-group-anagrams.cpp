class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string, vector<string>> mp;
        for (auto element : strs){
          auto value = element ;
          sort(element.begin(),element.end());   // key is sorted like aet 
          mp[element].push_back(value);
          
        }

        // make a big vector for storing answer 
        vector<vector<string>> mainAns;
      // now has one key(sorted ) and  multiple value from strs array 
     
  // method 01 all value at once 
  for (auto values : mp){
    mainAns.push_back(values.second);
  }

  // method 02 iterate one by one value 
  // for (auto values : mp){
  //   vector<string>ans;
  //   for (auto oneValue : values.second){
  //     ans.push_back(oneValue);
  //   }
  //   mainAns.push_back(ans);
  // }
      return mainAns;
    }
};