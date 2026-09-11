class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int count = 0;

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    // same indices cannot be zero 
                    if (i == j || i == k || j == k)
                        continue;

                    
                    if (digits[i] == 0)
                        continue;

                   // last digit must be even
                    if (digits[k] % 2 != 0)
                        continue;

                    int number = digits[i] * 100
                               + digits[j] * 10
                               + digits[k];

                    if (st.find(number) == st.end()) {
                        count++;
                        st.insert(number);
                    }
                }
            }
        }

        return count;
    }
};