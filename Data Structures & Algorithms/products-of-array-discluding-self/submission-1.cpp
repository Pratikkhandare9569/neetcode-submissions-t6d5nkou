class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long allProduct=1;
        int isZero=0;
        for(auto i:nums)
        {
            if(i==0)
            {
                isZero++;
                continue;
            }
            allProduct*=i;
        }
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            
            if(isZero>1)
            {
             return ans;
            }
            else if(isZero==1)
            {
                nums[i]? ans[i]=0:ans[i]=allProduct;
            }
            else
            {
                ans[i]=allProduct/nums[i];
            }
            
        }
        return ans;
    }
};
