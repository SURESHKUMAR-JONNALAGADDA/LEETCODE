class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=1,n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[l]=nums[i];
                l++;
            }

        }
        return l;
    }
};