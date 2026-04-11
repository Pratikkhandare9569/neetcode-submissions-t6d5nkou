class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
      int n= arr.size();
      vector<int> ans;
      for(int i=0;i<n;i++)
      {
         int j;
         for(j=i+1;j<n;j++)
         {
            if(arr[j]>arr[i])
            {
               cout<<arr[j]<<" "<<arr[i]<<endl;
               cout<<j<<" Hell "<<i<<endl;
               ans.push_back(j-i);
               break;
            }
         }
         if(j==n)
         {
            ans.push_back(0);
         }
      }
      return ans;
    }
};
