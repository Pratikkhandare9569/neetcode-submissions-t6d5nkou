class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int difference=target-nums[i];
            if(mp.find(difference)!=mp.end())
            {
                return {mp[difference],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
