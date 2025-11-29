class Solution {
public:
    const int M = 1e9+7;
    int solve (int k, int n,vector<vector<int>>&dp)
    {
        if (n==0||n==1)
        return n;
        if(k==1)
        return n;
        if(dp[k][n]!=-1)
        return dp[k][n];
        int ans=1000000,l=1,r=n,temp=0; 
        while(l<=r)
        {
            int mid = (l+r)/2;
            int left = solve(k-1,mid-1,dp);
            int right = solve(k, n-mid,dp);
            temp = 1+max(left,right);
            if(left<right)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            ans = min(ans,temp);
        }
        dp[k][n]=ans;
        return dp[k][n];
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return solve(k,n,dp);
    }
};