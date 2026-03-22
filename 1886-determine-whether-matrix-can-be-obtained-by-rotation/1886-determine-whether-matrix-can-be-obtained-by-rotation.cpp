class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        vector<vector<int>> v = mat;
        if(v==target)
        return true;
        for(int k=0;k<3;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    v[i][j] = mat[j][n-1-i];
                }
            }
            mat =v;
            if(v==target)
            return true;
        }
        
        
        return false;
    }
};