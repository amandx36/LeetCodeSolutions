class Solution {
public:
    static bool comparator(const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];   // sort by units per box descending
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), comparator);

        int Maxcapacity = 0;
        int i = 0;

        while (truckSize > 0 && i < boxTypes.size()) {

            int value = min(boxTypes[i][0], truckSize);

            truckSize -= value;
            Maxcapacity += value * boxTypes[i][1];

            if (value == boxTypes[i][0]) {
                i++;   // move to next box type only if current finished
            }
        }

        return Maxcapacity;
    }
};