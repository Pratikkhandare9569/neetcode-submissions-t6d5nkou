class Solution {
    bool checkIszero(vector<int> arr)
    {
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> mp(26,0);
        for(auto i:s1)
        {
            mp[i-'a']++;
        }   
        for(int i=0;i<26;i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<endl;
        if(s2.size()<s1.size()) return false;
        int n=s2.size();
        int m=s1.size();
        cout<<n<<m<<endl;
        for(int i=0;i<n-m+1;i++)
        {
            vector<int> mp2(26,0);
            mp2=mp;
            int left=i;
            cout<<left<<endl;
            cout<<i<<" "<<i+m<<endl;
            bool flag=true;
            while(left<i+m)
            {
                cout<<mp[s2[i]-'a']<<mp2[s2[i]-'a']<<endl;
                if(mp2[s2[left]-'a']<=0)
                {
                    flag=false;
                    break;
                }
                else
                {
                    mp2[s2[left]-'a']--;
                }
                left++;
            }
            if(flag &&  checkIszero(mp2))
            {
                cout<<"Hello"<<endl;
               return true;
            
            }
        }
        return false;
    }
};
