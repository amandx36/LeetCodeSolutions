#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> subArrMinLen(vector<int> nums, int target) {
        int n = nums.size();

        // prefix[i] = minimum length of a target-sum
        // subarray completely before i
        vector<int> prefix(n + 1, INT_MAX);

        int sum = 0;
        int left = 0;
        int best = INT_MAX;

        for (int right = 0; right < n; right++) {

            sum += nums[right];

            while (sum > target) {
                sum -= nums[left];
                left++;
            }

            if (sum == target) {
                int len = right - left + 1;
                best = min(best, len);
            }

            prefix[right + 1] = best;
        }

        return prefix;
    }


    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();

        auto pre = subArrMinLen(arr, target);



        auto temp = arr;
        reverse(temp.begin(), temp.end());


        auto suff = subArrMinLen(temp, target);


        reverse(suff.begin(), suff.end());


        int ans = INT_MAX;

        for (int i = 0; i <= n; i++) {

            if (pre[i] == INT_MAX || suff[i] == INT_MAX)
                continue;

            ans = min(ans, pre[i] + suff[i]);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};