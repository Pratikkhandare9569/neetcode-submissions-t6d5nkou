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

        // Slide the window
        for (int right = 0; right < n; right++) {

            // Add new character
            window[s2[right] - 'a']++;
            if(right>=m)
            {
            // Remove old character
            window[s2[right - m] - 'a']--;
            }

            if (need == window)
                return true;
        }

        return false;
    }
};
