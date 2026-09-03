class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minele = *min_element(nums1.begin(),nums1.end());
        // if min element  odd then it convert all the element odd 

        if( minele % 2  != 0  ) return true ;
        // minele is even so any one element in array odd then even min element  cannot convert the  nums array into all even 
        for(auto  ele : nums1){
            if(ele % 2 != 0 ) return false ;
        }
        // all element is even 
        return true ;
    }

};