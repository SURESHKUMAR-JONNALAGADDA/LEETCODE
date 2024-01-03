class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        if(r==0)
            return 0;
        int lm=height[0];
        int rm=height[r];
        int m=min(lm,rm);
        int sum=0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=lm)
                {
                    lm=height[l];
                }
                else
                {
                    sum+=(lm-height[l]);
                }
                l++;
            }
            else
            {
                if(height[r]>=rm)
                {
                    rm=height[r];
                }
                else
                {
                    sum+=(rm-height[r]);
                }
                r--;
            }
            cout<<sum<<lm<<rm<<endl;
        }
        return sum;
    }
};