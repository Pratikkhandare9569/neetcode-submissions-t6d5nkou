class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(s.length()!=t.length())
        {
            return false;
        }   
        unordered_map<char,int> mp;
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
            mp[i]--;
        }
        return true;

    }
};
