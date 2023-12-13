class Solution {
public:
    bool check(int i,int j,int m,int n,vector<vector<int>>& ma)
    {
        int s=0,l=0;
        for(int k=0;k<m;k++)
        {
            cout<<ma[k][j]<<endl;
            if(ma[k][j]==1)
                s++;
        }
        for(int k=0;k<n;k++)
        {
            if(ma[i][k]==1)
                l++;
        }
        cout<<s<<l;
        if(s==1&&l==1)
            return true;
        else 
            return false;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1&&check(i,j,m,n,mat))
                {
                    c++;
                    break;
                }
                
            }
        }
        return c;        
    }
};