class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mp;
        int n = nums.size();
        if(n<3)
        return -1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        int ans=-1;
        for(auto x:mp)
        {
            if(x.second.size()>=3)
            {
                for(int i=0;i<(x.second.size()-2);i++)
                {
                    if(ans==-1)
                    {
                        ans=(x.second[i+2]-x.second[i])*2;
                    }
                    else
                    {
                        int s = ((x.second[i+2]-x.second[i])*2);
                        ans = min(ans,s);
                    }
                }
            }
        }
        return ans;
    }
};