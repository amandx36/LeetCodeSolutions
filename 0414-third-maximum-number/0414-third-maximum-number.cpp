class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // Method 01 tc nlogn

        // // sorting the element dude
        // sort(nums.begin(), nums.end());

        // // now remove the duplicate element form vector
        // vector<int> newOne;
        // newOne.push_back(nums[0]);
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[i - 1]) {
        //         newOne.push_back(nums[i]);
        //     }
        // }

        // // giving answer dude
        // if (newOne.size() >= 3) {
        //     return newOne[newOne.size() - 3];
        // }
        // return newOne[newOne.size() - 1];
       
        // method 02 using set tc n 

      
        // is the size of set is greater than threee 
        set<int> bag;

        for (auto ele : nums) {
            bag.insert(ele);
        }

        if (bag.size() >= 3) {
            auto it = bag.end();
            --it;  // largest
            --it;  // second largest
            --it;  // third largest
            return *it;
        }

        return *prev(bag.end());  // largest
    }
};