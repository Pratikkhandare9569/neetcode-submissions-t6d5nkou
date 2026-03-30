class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int i=0;
        int ans=INT_MIN;
        int j=n-1;
        while(i<j)
        {
            int waterIn = (j-i)*min(heights[i],heights[j]);
            ans=max(ans,waterIn);
            if(heights[i]<heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
