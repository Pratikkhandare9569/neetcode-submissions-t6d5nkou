class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
            vector<pair<int, int>> vec(mp.begin(), mp.end());
    // Sort by value
    sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;  // ascending
    });
        vector<int> ans;
    
        for(auto &i:vec)
        {
            ans.push_back(i.first);
            k--;
            if(k==0)
            {
                return ans;
            }
        }
        return ans;
    }
};
