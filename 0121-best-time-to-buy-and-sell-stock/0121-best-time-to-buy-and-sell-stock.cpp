class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // TC :) 0(n square)

        // int maxProfit = 0 ;
        // int  n= prices.size();
        // for (int i = 0 ; i < n;i++){
        //     int cost = 0 ;
        //     for(int j =  i ; j < n ;  j ++ ){
        //         cost = prices[j]-prices[i];
        //         if (maxProfit<cost){
        //             maxProfit  = cost;
        //         } 
        //     }
        // }
        // return maxProfit;

        int minPurchase = INT_MAX ;
        int n  = prices.size();
        int maxProfit = 0 ;
        for(int i = 0 ; i < n ; i++){
             minPurchase = min(minPurchase,prices[i]);
           int profit = prices[i] - minPurchase;
            maxProfit = max(maxProfit,profit);


        }
        return maxProfit;
    }
};