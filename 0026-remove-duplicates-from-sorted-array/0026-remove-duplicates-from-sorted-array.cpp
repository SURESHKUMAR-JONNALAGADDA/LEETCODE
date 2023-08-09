class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j;
        int n=nums.size();
        for(j=1;j<n;j++)
        {
            if(nums[j-1]!=nums[j])
            {
                cout<<i;
                nums[i++]=nums[j];
            }
        }
        cout<<i;
        return i;
    }
};