class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minTillNow=INT_MAX;
        int maxProfit=INT_MIN;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            minTillNow=min(minTillNow,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minTillNow);
        }        
        return maxProfit;
    }
};
