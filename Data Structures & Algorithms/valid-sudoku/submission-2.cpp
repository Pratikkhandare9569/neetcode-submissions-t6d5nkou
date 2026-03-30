class Solution {
    bool isValidRow(vector<vector<char>>& board,int row)
    {
        vector<int> arr(10,0);
        for(int i=0;i<9;i++)
        {
            if(board[row][i]!='.')
            {
            arr[board[row][i]-'0']++;
            }
        }
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
            if(arr[i]>1)
            {
                return false;
            }
        }
        return true;
    }
    bool isvalidColumn(vector<vector<char>>& board,int col)
    {
        vector<int> arr(10,0);
        vector<int> mp ={'.','1','2','3','4','5','6','7','8','9'};
        for(int i=0;i<9;i++)
        {
              if(board[i][col]!='.'){
            arr[board[i][col]-'0']++;
              }
        }
        for(int i=0;i<10;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        return true;
    }
    bool isValidSubMaxtrix(vector<vector<char>>& board,int row,int col)
    {
        vector<int> arr(10,0);

        for(int i=row;i<row+3;i++)
        {
            for(int j=col;j<col+3;j++)
            {

                 if(board[i][j]!='.'){
            arr[board[i][j]-'0']++;
              }
            }
        }
         for(int i=0;i<10;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9,m=9;
        for(int i=0;i<n;i++)
        {
           bool validRow = isValidRow(board,i);
           if(validRow==false)
           {
            return false;
           }
        }
          for(int i=0;i<n;i++)
        {
           bool validColumn = isvalidColumn(board,i);
           if(validColumn==false)
           {
            return false;
           }
        }
        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                bool validSubMat=isValidSubMaxtrix(board,i,j);
                if(!validSubMat)
                {
                    return false;
                }
            }
        }
        
        return true;

    }
};
