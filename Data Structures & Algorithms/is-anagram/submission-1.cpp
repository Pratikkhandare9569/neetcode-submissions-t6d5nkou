class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:t)
        {
            if(mp[i]==0)
            {
                return false;
            }
            else
            {
                mp[i]--;
            }
        }
        return true;
    }
};
