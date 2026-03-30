class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longestLen=0;
        int currLen=1;
        for(auto i:nums)
        {
            st.insert(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int curr=nums[i];
                currLen=1;
                while(st.find(curr+1)!=st.end())
                {
                    curr++;
                    currLen++;
                }
            }
            longestLen=max(currLen,longestLen);
        }
        return longestLen;
    }
};
