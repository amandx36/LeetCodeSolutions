class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        // TC :)  0(N)

        // vector<int>res;
        // unordered_set<char>vw;
        // vw.insert('a');
        // vw.insert('i');
        // vw.insert('e');
        // vw.insert('o');
        // vw.insert('u');

        // for(auto ele : queries){
        //     int n = ele.size();
        //     int lw = ele[0];
        //     int hg = ele[n-1];
        //     int count = 0 ;
        //     for(int i = lw ; i <= hg ; i++){
        //         string wd = words[i];
        //         int len = wd.size();
        //         if((vw.find(wd[0])!=vw.end())and
        //         vw.find(wd[len-1])!=vw.end()){
        //             count++;
        //         }
        //     }
        //     res.push_back(count);
        // }
        // return res;

        // method 02
        unordered_set<char> vw;
        vw.insert('a');
        vw.insert('e');
        vw.insert('i');
        vw.insert('o');
        vw.insert('u');

        vector<int> valid;

        for (auto ele : words) {
            int len = ele.size();

            if (vw.find(ele[0]) != vw.end() &&
                vw.find(ele[len - 1]) != vw.end()) {
                valid.push_back(1);
            } else {
                valid.push_back(0);
            }
        }

        // Prefix sum
        // preValid[i] =[0 ... i-1]
        int n = valid.size();
        vector<int> preValid(n + 1, 0);

        for (int i = 0; i < n; i++) {
            preValid[i + 1] = preValid[i] + valid[i];
        }

        vector<int> ans;

        for (auto ele : queries) {
            int st = ele[0];
            int ed = ele[1];

            int count = preValid[ed + 1] - preValid[st];

            ans.push_back(count);
        }

        return ans;
    }
};