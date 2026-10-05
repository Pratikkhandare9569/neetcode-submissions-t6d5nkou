class Solution {
public:
    int characterReplacement(string s, int k) {
           vector<int> mp(26,0);
        int left=0;
        int n=s.size();
        int maxFreq=0;
        int maxLen=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]-'A']++;
            maxFreq=max(maxFreq,mp[s[i]-'A']);
            while((i-left+1)-maxFreq>k)
            {
                mp[s[left]-'A']--;
                left++;
            }
            maxLen=max(maxLen,i-left+1);
        }
        return maxLen;  
    }
};
