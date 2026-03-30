class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
       
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto &p : mp) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> ans;

        for (int i = nums.size(); i >= 0 && ans.size() < k; i--) {
            for (int num : bucket[i]) {
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }

        return ans;
    }
};
