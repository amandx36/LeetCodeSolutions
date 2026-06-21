class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long long sum = 0 ;
        int count = 0 ;
        sort(costs.begin(),costs.end());
        for(int i = 0 ; i < costs.size();i++){
             sum+=costs[i];
            if(sum>coins){
                return i   ;
            }
           
        }
        return costs.size();
    }
};