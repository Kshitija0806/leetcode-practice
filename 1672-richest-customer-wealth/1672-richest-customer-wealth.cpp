class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int res=0;
            for(int j=0;j<accounts[i].size();j++){
                res+=accounts[i][j];
            }
            max_wealth=max(res,max_wealth);
        }
        
        return max_wealth;
    }
};