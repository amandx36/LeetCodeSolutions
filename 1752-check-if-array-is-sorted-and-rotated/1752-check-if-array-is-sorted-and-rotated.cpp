class Solution {
public:

    // function for checking is the sorted 
    bool isSorted(vector<int>temp){
       
        for(int i = 0 ; i < temp.size()-1;i++){
            if(temp[i]>temp[i+1]) return false ;

        }
        return true ;
    }


    bool check(vector<int>& nums) {

        // Algo 
        // rotate and every  rotated is this sort or not 
        int n = nums.size();
        for(int i = 0 ; i < n;i++){
            vector<int> hanged ;
            for(int  j = 0 ; j < n;j++){
                hanged.push_back(nums[(i+j)%n]);
            }
            if(isSorted(hanged)) return true ;
        }
        return false ;
       
        
    }
};