class Solution {
public:


  vector<vector<int>> count(vector<vector<int>> ans, int target, int i, int sum,
                            vector<int> curr, vector<int> &candidates) {

   
    if (sum == target) {
      ans.push_back(curr);
      return ans;
    }

    // index out of bound 
    if (i >= candidates.size())
      return ans;

    // Sum target se exceed ho gaya
    if (sum > target)
      return ans;

    //  current element

    curr.push_back(candidates[i]);
    sum += candidates[i];

    ans = count(ans, target, i, sum, curr, candidates);

    // Backtrack
    sum -= candidates[i];
    curr.pop_back();

    
    //  choose next  2: next element

    ans = count(ans, target, i + 1, sum, curr, candidates);

    return ans;
  }

  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {

    vector<vector<int>> ans;
    vector<int> curr;

    ans = count(ans, target, 0, 0, curr, candidates);

    return ans;

    }
};