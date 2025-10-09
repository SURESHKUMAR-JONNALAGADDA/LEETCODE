class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int i,j,n = skill.size();
        int m = mana.size();
        vector<vector<long int>> v(m,vector<long int>(n+1,0));
        for(int i=1;i<n+1;i++)
        {
            v[0][i]= v[0][i-1]+(skill[i-1]*mana[0]);        
        }
        for(i=1;i<m;i++)
        {
            v[i][0]=v[i-1][1];
            for(j=1;j<n+1;j++)
            {
                v[i][j] = v[i][j-1]+(skill[j-1]*mana[i]);
                if(j<n && v[i][j]<v[i-1][j+1])
                {
                    v[i][j]=v[i-1][j+1];
                }
            }
            for(j=n-1;j>0;j--)
            {
                v[i][j]=v[i][j+1]-(skill[j]*mana[i]);
            }
        }
        return v[m-1][n];
    }
};