class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
        {
            return 0;
        }
        
        int ans=1;
        for(int i=0;i<n;i++)
        {
            int curr=0;
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++)
            {
                if(mp.find(s[j])!=mp.end())
                {
                    break;
                }
                curr++;
                mp[s[j]]++;
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};
