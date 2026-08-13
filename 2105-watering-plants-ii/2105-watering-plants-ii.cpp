class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int i = 0;
        int n = plants.size();
        int j = n - 1;
        int waterA = capacityA;
        int waterB = capacityB;
        int refile = 0;
        while (i < j) {
            if (waterA < plants[i]) {
                refile++;
                waterA = capacityA;
            }
            waterA -= plants[i];
            if (waterB < plants[j]) {
                refile++;
                waterB = capacityB;
            }
            waterB -= plants[j];
            i++;
            j--;
            
        }

        if (i == j) {
                int maxWater = max(waterA, waterB);
                if (maxWater < plants[i]) {
                    refile++;
                }
            }

        return refile;
    }
};