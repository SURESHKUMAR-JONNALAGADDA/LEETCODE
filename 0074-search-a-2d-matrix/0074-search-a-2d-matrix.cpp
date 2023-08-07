class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int x=-1;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]<=target && matrix[i][m-1]>=target)
            {
                x=i;
                break;
            }
        }
        if(x==-1)
            return false;
        for(int i=0;i<m;i++)
        {
            if(matrix[x][i]==target)
            {
                return true;
            }
        }
        return false;
    }
};