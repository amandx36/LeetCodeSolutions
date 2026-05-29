class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int k = 0; k < n; k++) {
            unordered_set<int> data1;
            unordered_set<int> data2;

            for (int i = 0; i < n; i++) {
                data1.insert(matrix[i][k]);
            }

            for (int j = 0; j < n; j++) {
                data2.insert(matrix[k][j]);
            }

            for (int i = 0; i < n; i++) {
                if (data1.find(i+1) == data1.end()) {
                    return false;
                }
            }

            for (int j = 0; j < n; j++) {
                if (data2.find(j+1) == data2.end()) {
                    return false;
                }
            }

            
        }
        return true ;
    }
};