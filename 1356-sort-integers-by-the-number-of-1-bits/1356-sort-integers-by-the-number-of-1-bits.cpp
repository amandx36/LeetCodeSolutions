class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multimap<pair<int,int>, int> mp;
        // map<pair<bitcount,numer>,number>

        for(int i = 0; i < arr.size(); i++) {
            int count = 0;
            int val = arr[i];

            while(val) {
                val = val & (val - 1);
                count++;
            }

            mp.insert({{count, arr[i]}, arr[i]});
        }

        arr.clear();

        for(auto it : mp) {
            arr.push_back(it.second);
        }

        return arr;
    }
};