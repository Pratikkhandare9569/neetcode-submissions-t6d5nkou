class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        int maxCount=0;
        int count=0;
        for(auto i:nums)
        {
            if(st.find(i-1)!=st.end())
            {
                continue;
            }
            else
            {
                count=1;
                int num=i;
                while(1)
                {
                    if(st.find(num+1)!=st.end())
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    num++;
                }
                maxCount=max(maxCount,count);
            }   
        }
        return maxCount;
    }
};
