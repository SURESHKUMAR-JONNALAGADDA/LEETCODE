class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int m=0;
        int d;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            d=abs(nums[i]-nums[i+1]);
            if(d>m)
            {
                m=d;
            }
        }
        m=max(m,abs(nums[0]-nums[n-1]));
        return m;

    }
};