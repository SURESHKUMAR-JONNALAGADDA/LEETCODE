class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size();
        vector<bool> ans;
        int b=0;
        for(int i=0;i<n;i++)
        {
            b=b<<1;
            b+=nums[i];
            b=b%5;
            if(b%5==0)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};