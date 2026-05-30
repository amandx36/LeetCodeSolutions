class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        // extract the maxiii element 
        int maxiii = INT_MIN;
        for(int  i = 0 ; i < n ; i++){
            if(nums[i]>maxiii) maxiii= nums[i];
        }
        if(nums.size()-1!=maxiii) return false ;

        // count the number of last occurance  element 
        // put in  map 
        unordered_map<int,int>freq;
        for(int i = 0 ; i <  n ; i++){
            freq[nums[i]]++;
            
        }

        // now check the number of maxi element dude 
       
            if(freq[maxiii]!=2) return false  ;
            

      

        //  now check eery element is unique or not 
        for(auto it : freq){
            if(it.first != maxiii && it.second != 1){
        return false;
    }
}
        return true ;
    }
};