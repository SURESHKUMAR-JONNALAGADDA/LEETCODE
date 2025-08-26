class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float m=0;
        int ma=0;
        for(int i=0;i<dimensions.size();i++)
        {

            float x=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
            if(x>m)
            {
                m=x;
                ma=dimensions[i][0]*dimensions[i][1];
            }
            else if(x==m)
            {
                ma=max(ma,dimensions[i][0]*dimensions[i][1]);
            }
        }
        return ma;
    }
};