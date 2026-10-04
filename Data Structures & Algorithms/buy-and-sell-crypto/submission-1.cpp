class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> lowPrice(n,0);
        vector<int> highPrice(n,0);
        lowPrice[0]=prices[0];
        highPrice[n-1]=prices[n-1];
        for(int i=1,j=n-2;i<n,j>=0;i++,j--)
        {
            lowPrice[i]=min(lowPrice[i-1],prices[i]);
            highPrice[j]=max(highPrice[j+1],prices[j]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,highPrice[i]-lowPrice[i]);
        }
        return ans;
    }
};
