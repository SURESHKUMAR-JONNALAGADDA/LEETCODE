class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int k=mp.size();
        mp.clear();
        int c=0;
        for(int i=k;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                mp[nums[j]]++;
            }
            if(mp.size()==k)
            c++;
            for(int j=i;j<n;j++)
            {
                mp[nums[j]]++;
                mp[nums[j-i]]--;
                if(mp[nums[j-i]]==0)
                mp.erase(nums[j-i]);
                if(mp.size()==k)
                c++;
            }
            mp.clear();
        }
        return c;
    }
};