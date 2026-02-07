class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // tc :)   ( n square )

        vector<int> intersection;
        // unordered_set<int>bag;
        // for(int i  = 0 ; i < nums1.size();i++){
        //     for(int j = 0 ; j < nums2.size();j++){
        //         if(nums1[i]==nums2[j]){
        //             bag.insert(nums2[j]);
        //         }
        //     }
        // }

        // // iterate to whole set
        // for(int element : bag){
        //     intersection.push_back(element);
        // }

        // return intersection;

        // using 2 set tc (n)

        unordered_set<int> bag1;
        unordered_set<int> bag2;

        // put num1 array in bag
        for (int i = 0; i < nums1.size(); i++) {
            bag1.insert(nums1[i]);
        }

        // now compare if element exist in  nums1 this is intersection element
        for (int i = 0; i < nums2.size(); i++) {
            // if element exist  in bag 1
            if (bag1.find(nums2[i]) != bag1.end()) {
                // put in bag 2
                bag2.insert(nums2[i]);
            }
        }

        // now put the bag 2 element  in answer vector dude
        // for each loop
        for (int element : bag2) {
            intersection.push_back(element);
        }
        return intersection;
    }
};