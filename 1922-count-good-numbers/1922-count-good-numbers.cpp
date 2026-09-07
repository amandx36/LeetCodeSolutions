class Solution {
public:
    long long mod = 1000000007;

    long long pwTox(long long x, long long j) {
        long long ans = 1;

        while (j > 0) {
            if (j % 2 == 1)
                ans = (ans * x) % mod;

            x = (x * x) % mod;
            j = j / 2;
        }

        return ans;
    }

    long long countGoodNumbers(long long n) {
        long long pos5 = pwTox(5, (n + 1) / 2);
        long long pos4 = pwTox(4, n / 2);

        return (pos5 * pos4) % mod;
    }
};