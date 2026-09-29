class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto i:strs)
        {
            int len=i.size();
            ans+=to_string(len);
            ans+="#";
            ans+=i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        cout<<s;
         vector<string> ans;
         string curr;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            if(s[i]=='#')
            {
                cout<<"curr"<<curr<<endl;
                int newStrLen=std::stoi(curr);
                newStrLen+=i;
                cout<<i<<"a"<<newStrLen<<endl;
                string newStr;
                i++;
                while(i<=newStrLen)
                {
                    newStr+=s[i];
                    i++;
                }
                ans.push_back(newStr);
                curr="";
            }
            else
            {
                curr+=s[i];
                i++;
            }
        }
       return ans;
    }
};
