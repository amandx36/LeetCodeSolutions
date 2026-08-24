class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        // brute force prefix sum 
        // long long n = nums.size();
        // vector<int > ans;
        // vector<long long > presm(n + 1, 0);
        // for (int i = 0; i < n; i++) {
        //     presm[i + 1] = presm[i] + nums[i];
        // }

        // for (int i = 0; i < n; i++) {
        //     // base case

        //     if (i - k < 0 || i + k >= n) {
        //         ans.push_back(-1);
        //         continue;
        //     }
        //     // left sum
        //     long long sm = 0;
        //     sm = presm[i + k + 1] - presm[i - k];
        //     long long  avg = sm / (2 * k + 1);
        //     ans.push_back(avg);
        // }
        // return ans;

        // method 02 sliding window 
        int n = nums.size();
        // window size 
        // base case 
        int winsize = 2 * k + 1 ;
        vector<int>ans(n,-1);
        if(n<winsize)return ans ;

        // fist window 
        long long  winsum = 0 ;
        for(int i = 0 ; i < winsize ; i++){
            winsum += nums[i];
        }
        ans[k] = winsum / winsize;
        // expand 
        for(int i = k+1 ; i < n-k ; i++){
            winsum -=nums[i-k-1];
            winsum +=nums[i+k];
            ans[i] = winsum / winsize;
        }
        return ans ;

    }
};