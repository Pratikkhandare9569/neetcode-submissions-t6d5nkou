class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int ans=INT_MIN;
        while(i<j)
        {
            int currWater=min(heights[i],heights[j])*(j-i);
            ans=max(ans,currWater);
            if (heights[i] < heights[j])
    i++;
else
    j--;

        }
        return ans;
    }
};
