class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dublicate = -1;
        unordered_set<int>st;
        vector<int>ans;
        int n = nums.size();
        for(int i = 1 ; i < n ;i++){
            if(nums[i]==nums[i-1]){
                dublicate = nums[i];
                break;
            }
        }
        // finding the missing number 
        int count = 1 ;
        int missing = -1;
        for(int i = 0 ; i < n ; i++){
            st.insert(nums[i]);
        }
       
        for(int i = 1 ; i <=n ;i++){
            if(st.find(i)==st.end()){
                missing=i;
            }
        }
        cout<<dublicate<<missing;
        ans.push_back(dublicate);
        ans.push_back(missing);
        return ans ;
    }
};