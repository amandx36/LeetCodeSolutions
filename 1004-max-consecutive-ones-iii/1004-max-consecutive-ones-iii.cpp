class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flip = 0  , i = 0 , j = 0 ;
        int maxLeng = INT_MIN,len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else {
                if(flip<k) {
                    flip++;
                    j++;
                }
                else{
                    // flip == k 
                    // calculate the length 
                    len = j -  i ;
                    maxLeng =  max(maxLeng,len);
                    // left side se pehla 0 cross karo
                    while(nums[i]==1) i++;
                    i++;
                    j++;

                }
            } 
        }
        len = j - i ;
        maxLeng =  max(maxLeng,len);
        return maxLeng;

        
    }
};