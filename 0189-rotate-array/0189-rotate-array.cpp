class Solution {
public:

// has TC ()n)
    void removing (vector<int>& arr,int i , int j){
        int n = j - i + 1 ;
        int middleValue = 0 ;

        while(j>i){
            middleValue =  arr[i];
            arr[i]  =  arr[j];
            arr[j] =  middleValue;
            i++;
            j--;

            
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

       k = k % n ;
        
        removing(nums,0,n-k-1);
        removing(nums,n-k,n-1);
        removing(nums,0,n-1);
    }
};