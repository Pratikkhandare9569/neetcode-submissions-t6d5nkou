class Solution {
public:
    bool isPalindrome(string s) {
        string newStr="";
        for(auto i:s)
        {
            int val=i;
            if((val>=97 && val<=122)||(val>=48&&val<=57))
            {
                newStr+=i;
            }
            else if(val>=65 && val<=90)
            {
                newStr+=tolower(i);
            }
        }
        int start=0;
        int end=newStr.size()-1;
        while(start<end)
        {

             if(newStr[start]!=newStr[end])
            {
                cout<<newStr<<" "<<start<<" "<<end<<endl;
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
};
