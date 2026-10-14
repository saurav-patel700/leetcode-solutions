class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprices=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
            minprices=min(prices[i],minprices);
            int profit=prices[i]-minprices;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};