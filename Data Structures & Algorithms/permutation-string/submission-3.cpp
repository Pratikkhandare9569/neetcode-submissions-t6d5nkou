class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if (m > n)
            return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        // Frequency of s1
        for (char c : s1) {
            need[c - 'a']++;
        }

        // First window
        for (int i = 0; i < m; i++) {
            window[s2[i] - 'a']++;
        }

        if (need == window)
            return true;

        // Slide the window
        for (int right = m; right < n; right++) {

            // Add new character
            window[s2[right] - 'a']++;

            // Remove old character
            window[s2[right - m] - 'a']--;

            if (need == window)
                return true;
        }

        return false;
    }
};
