class Solution {
public:
    // int longest(vector<int>& v,int i,int l,vector<int>& v1)
    // {
    //     for(int j=0;j<v1.size();j++)
    //         cout<<v1[j];
    //     cout<<endl;
    //     if(i==v.size())
    //     return l;
    //     if(v1[l-1]<v[i])
    //     {
    //         v1.push_back(v[i]);
    //         int m=longest(v,i+1,l+1,v1);
    //         v1.pop_back();
    //         return max(m,longest(v,i+1,l,v1));
    //     }
    //     else
    //     {
    //         int m=longest(v,i+1,l,v1);
    //         while(l>0)
    //         {
    //             if(v1[l-1]>=v[i])
    //             {
    //             v1.pop_back();
    //             l--;
    //             }
    //         }
    //         v1.push_back(v[i]);
    //         return max(m,longest(v,i+1,l,v1));
    //     }
    // }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = std::max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};