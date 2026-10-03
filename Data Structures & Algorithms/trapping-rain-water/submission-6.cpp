class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();
        if(n == 0) return 0;
         vector<int> MaxPrefixHeight(n,0);
         vector<int> MaxSuffixHeight(n,0);
        MaxPrefixHeight[0]=height[0];
        for(int i=1;i<n;i++)
        {
            MaxPrefixHeight[i]=max(MaxPrefixHeight[i-1],height[i]);
        }
        MaxSuffixHeight[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--)
        {
            MaxSuffixHeight[j]=max(MaxSuffixHeight[j+1],height[j]);
        }
        int waterTrap=0;
        for(int i=0;i<n;i++)
        {
            waterTrap+=min(MaxPrefixHeight[i],MaxSuffixHeight[i])-height[i];
        }
        return waterTrap;
    }
};
