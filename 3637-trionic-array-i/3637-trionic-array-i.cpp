class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=0,q=0,r=0;
        int n= nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1]&& p==1&& q==1)
            {
                r=1;
            }
            else if(nums[i]>nums[i-1] && q==0&& r==0)
            {
                p=1;
            }
            else if(nums[i]<nums[i-1] && p==1&& r==0)
            {
                q=1;
            }
            else
            {
                return false;
            }
        }
        if(p==1&&q==1&&r==1)
        return true;
        else
        return false;
    }
};