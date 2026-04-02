class Solution {
    bool isAllzero(vector<int> &arr)
    {
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> mp(26,0);
        int n=s1.size();
        for(int i=0;i<n;i++){
            mp[s1[i]-'a']++;
        }
        int m=s2.size();
        if(n>m)
        {
            return false;
        }
        for(int right=0;right<m;right++)
        {
            mp[s2[right]-'a']--;
            if(right>=n)
            {
                mp[s2[right-n]-'a']++;
            }
            if(isAllzero(mp)){
                return true;
            }
        }
        return false;
    }
};
