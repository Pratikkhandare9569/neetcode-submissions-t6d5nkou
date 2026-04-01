class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> mp(26,0);
        int left=0;
        int n=s.size();
        int maxFeq=0;
        int maxLen=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]-'A']++;
            maxFeq=max(maxFeq,mp[s[i]-'A']);
            while((i-left+1)-maxFeq>k)
            {
                mp[s[left]-'A']--;
                left++;
            }
            maxLen=max(maxLen,i-left+1);
        }   
        return maxLen;
    }
};
