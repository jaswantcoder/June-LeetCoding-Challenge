#define fi first
#define se second
#define mp make_pair

int in[][2]={{0,1},{1,0},{0,-1},{-1,0}};
int n=0,m=0;
bool valid(int i,int j)
{
  
    if(i>=0 && i<n && j>=0 && j<m)
        return true;
    return false;
}

void dfs(vector<vector<char>> &board, int i, int j)
{
    if(board[i][j]!='O')
    return ;
    int k;
    board[i][j]='#';
    for(k=0;k<4;k++)
    {
         if(valid(i+in[k][0],j+in[k][1]))
             dfs(board,i+in[k][0],j+in[k][1]);
    }
    return;
}

class Solution {
public:
    void solve(vector<vector<char>>& board) {
    int i,j,ans=0;
       if(board.size()==0) return;
        n=board.size();
        m=board[0].size();
        for(i=0;i<n;i++)
        {
            if(board[i][0]=='O')
                dfs(board,i,0);
            
            if(board[i][m-1]=='O')
                dfs(board,i,m-1);
        }
        for(j=0;j<m;j++)
        {
            if(board[0][j]=='O')
                dfs(board,0,j);
            
            if(board[n-1][j]=='O')
                dfs(board,n-1,j);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                if(board[i][j]=='O')
                    board[i][j]='X';
        }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(board[i][j]=='#')
                    board[i][j]='O';
        return;
        
        
        
        }
};
