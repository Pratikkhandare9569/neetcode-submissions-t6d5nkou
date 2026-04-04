class Solution {
public:
   string minWindow(string s, string t) {
    vector<int> need(128, 0);

    for (char c : t) {
        need[c]++;
    }

    int left = 0;
    int count = t.size();  // how many chars we still need

    int minLen = INT_MAX;
    int start = 0;

    for (int right = 0; right < s.size(); right++) {

        // include character
        if (need[s[right]] > 0) {
            count--;
        }
        need[s[right]]--;

        // when valid window
        while (count == 0) {

            // update answer
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            // remove left char
            need[s[left]]++;

            if (need[s[left]] > 0) {
                count++;
            }

            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
};
