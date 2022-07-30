class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //Here the time limit exceeds
//         int profit=0;
        
//         for(int i=0;i<prices.size();i++){
//             int larger=0;
//             for(int j=i+1;j<prices.size();j++){
//                 if(prices[i] < prices[j]){
//                     larger=max(larger,prices[j]);
//                 }
//             }
//             int diff=larger-prices[i];
//             profit=max(profit,diff);
//         }
        
//         return profit;
        
        //A better solution is
        
        int n=prices.size();
        int mn=INT_MAX;
        int ans=0;
        
        for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
            ans=max(ans, prices[i]-mn);
        }
        
        return ans;
    }
};