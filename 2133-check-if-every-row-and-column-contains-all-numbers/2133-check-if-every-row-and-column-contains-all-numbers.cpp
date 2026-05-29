class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();


        // Method 01 Brute Force !! 

        // for (int k = 0; k < n; k++) {
        //     unordered_set<int> data1;
        //     unordered_set<int> data2;

        //     for (int i = 0; i < n; i++) {
        //         data1.insert(matrix[i][k]);
        //     }

        //     for (int j = 0; j < n; j++) {
        //         data2.insert(matrix[k][j]);
        //     }

        //     for (int i = 0; i < n; i++) {
        //         if (data1.find(i+1) == data1.end()) {
        //             return false;
        //         }
        //     }

        //     for (int j = 0; j < n; j++) {
        //         if (data2.find(j+1) == data2.end()) {
        //             return false;
        //         }
        //     }

            
        // }
        // return true ;



// Method 02 no extra loop 


        for (int i = 0; i < n; i++) {
            unordered_set<int> row;
            unordered_set<int> col;

            for (int j = 0; j < n; j++) {
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }

            if (row.size() != n || col.size() != n)
                return false;
        }

        return true;
    
    }
};