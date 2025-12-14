class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        vector<int> ans ;
        int n = arr.size();
        unordered_map<int, int> m;
        // put the element in set dude !!  do while loop
        for (auto ele : arr) {
            m[ele]++;
        }

        // now move from 100 to 999 to check whether the number likes in the
        // array
        for (int i = 100; i <= 999; i += 2) {
            int x = i;

            // extract the digits form the number
            int a = x % 10;
            // digit ko one place se small karo dude !!
            x = x / 10  ;
            int b = x % 10;
            x = x / 10;
            // extracted the last digit dude 
            int c = x % 10;

            // now check in the hasmap these digit available or not 
            // if a avialable 
            if (m.find(a)!=m.end()) {
                // a is available  decremnt the fre of a 
                m[a]--;
                if(m[a]==0) m.erase(a);
                // checking for b 
                if(m.find(b)!=m.end()) {
                    //  decrement the m and check for c
                    m[b]--;
                    // erase the element all the value become zeros 
                    if(m[b]==0) m.erase(b);

                    // check for c 
                    if (m.find(c)!= m.end()){
                        ans.push_back(i) ;
                    } 
                    m[b]++;
                }
                m[a]++;
            }

        }
        return ans ;
    }
};