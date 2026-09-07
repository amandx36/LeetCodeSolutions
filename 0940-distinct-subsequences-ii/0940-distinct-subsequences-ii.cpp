#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distinctSubseqII(string s) {

        const long long MOD = 1e9 + 7;

        long long total = 0;

        // Har character ke liye previously added subsequences
        vector<long long> last(26, 0);

        for (char ch : s) {

            int index = ch - 'a';

            // Current character se kitni NEW subsequences banengi
            long long newWays = total + 1 - last[index];

            newWays = (newWays + MOD) % MOD;

            // Total mein add karo
            total = (total + newWays) % MOD;

            // Is character ka record update karo
            last[index] = last[index] + newWays;
            last[index] %= MOD;
        }

        return total;
    }
};