class Solution {
public:
    const int M =1e9 + 7;
    void reach(int i,int j,int n,int m, vector<vector<int>>& grid, int k,vector<vector<vector<int>>>& dp)
    {
        if (i < n - 1)
        {
            for(int r=0;r<k;r++)
            {
                if(dp[i][j][r] !=-1)
                {
                    int x = (r+grid[i+1][j])%k;
                    if(dp[i+1][j][x] ==-1)
                    dp[i+1][j][x]=dp[i][j][r];
                    else
                    dp[i+1][j][x]=(dp[i+1][j][x]+dp[i][j][r])%M;
                }
            }
        }
        if (j < m - 1)
        {
            for(int r=0;r<k;r++)
            {
                if(dp[i][j][r] !=-1)
                {
                    int x = (r+grid[i][j+1])%k;
                    if(dp[i][j+1][x] ==-1)
                    dp[i][j+1][x]=dp[i][j][r];
                    else
                    dp[i][j+1][x]=(dp[i][j+1][x]+dp[i][j][r])%M;
                }
            }
        }
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k, -1)));
        dp[0][0][(grid[0][0])%k] =1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                reach(i,j,n,m,grid,k,dp);
            }
        }
        
        return max(0,dp[n-1][m-1][0]);
    }
};