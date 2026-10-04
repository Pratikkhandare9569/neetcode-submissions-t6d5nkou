class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int start=0;
        int ans=0;
        unordered_set<char> charSet;
        for(int i=0;i<n;i++)
        {
            while(charSet.find(s[i])!=charSet.end())
            {
                charSet.erase(s[start]);
                start++;
            }
            charSet.insert(s[i]);
            ans=max(ans,i-start+1);
        }
        return ans;
        
    }
};
