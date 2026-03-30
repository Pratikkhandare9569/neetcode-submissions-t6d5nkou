class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            vector<int> count(26, 0);

            // count frequency
            for (char c : s) {
                count[c - 'a']++;
            }

            // build key
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};