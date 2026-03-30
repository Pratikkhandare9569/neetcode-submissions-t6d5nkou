class Solution {
public:
    bool isPalindrome(string s) {
        string newStr="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            {
                if((s[i]>='A'&&s[i]<='Z'))
                {
                    s[i]=s[i]+32;
                }
                newStr+=s[i];
            }
        }
        cout<<newStr<<endl;
        int j=newStr.size()-1;
        int i=0;
        while(i<j)
        {
            if(newStr[i]!=newStr[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
