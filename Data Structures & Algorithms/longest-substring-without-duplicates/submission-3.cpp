class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> last;
        int count=1;
        int start=0;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(last.find(s[i])!=last.end()){
                start=max(start,last[s[i]]+1);
            }
            last[s[i]]=i;
            maxi=max(maxi,i-start+1);
        }
        return maxi;
    }
};
