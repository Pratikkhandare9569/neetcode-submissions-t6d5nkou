class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> boxes(9);

        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char val=board[i][j];
                if(val=='.') continue;
                int box=(i/3)*3+(j/3);
                if(row[i].count(val)||col[j].count(val)||boxes[box].count(val))
                {
                    cout<<i<<" "<<j<<" "<<box<<" "<<val<<endl;
                    return false;
                }
                else
                {
                    row[i].insert(val);
                    col[j].insert(val);
                    boxes[box].insert(val);
                }
            }
        }
        return true;
    }
};
