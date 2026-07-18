class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxprofit=INT_MIN;
        int minTill=INT_MAX;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            minTill=min(prices[i-1],minTill);
            int profit=prices[i]-minTill;
            maxprofit=max(profit,maxprofit);
        }
        return (maxprofit>0) ? maxprofit : 0;
    }
};