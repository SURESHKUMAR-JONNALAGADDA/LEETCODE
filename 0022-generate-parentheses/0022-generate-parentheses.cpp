class Solution {
public:
    void solve(string c,int i,int v,int n,int x,vector<string> & ans)
    {
        if(i==2*n-1)
        {
            ans.push_back(c+')');
            return;
        }
        if(v>0 && x<n)
        {
            solve(c+')',i+1,v-1,n,x,ans);
            solve(c+'(',i+1,v+1,n,x+1,ans);
        }
        else if(v>0)
        {
            solve(c+')',i+1,v-1,n,x,ans);
        }
        else
        {
            solve(c+'(',i+1,v+1,n,x+1,ans);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string st="(";
        solve(st,1,1,n,1,ans);
        return ans;
    }
};