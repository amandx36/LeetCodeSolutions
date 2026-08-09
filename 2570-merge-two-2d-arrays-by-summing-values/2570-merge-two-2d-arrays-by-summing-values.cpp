class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        // tc nlogn and  sc n+m

        // unordered_map<int,int>mp;
        // for(auto ele :nums1){
        //     mp[ele[0]] +=ele[1];
        // }
        // for(auto ele : nums2){
        //     mp[ele[0]] +=ele[1];
        // }
        // vector<vector<int>>res;
        // for(auto ele : mp){
        //     res.push_back({ele.first,ele.second});

        // }
        // sort(res.begin(),res.end());
        // return res ;

        // using the two pointer 
      int i = 0;
        int j = 0;

        vector<vector<int>> res;

        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i][0] == nums2[j][0]) {

                res.push_back({
                    nums1[i][0],
                    nums1[i][1] + nums2[j][1]
                });

                i++;
                j++;
            }

            else if (nums1[i][0] < nums2[j][0]) {

                res.push_back(nums1[i]);
                i++;
            }

            else {

                res.push_back(nums2[j]);
                j++;
            }
        }

        // left nums1 
        while (i < nums1.size()) {
            res.push_back(nums1[i]);
            i++;
        }

        // left nums2 
        while (j < nums2.size()) {
            res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};