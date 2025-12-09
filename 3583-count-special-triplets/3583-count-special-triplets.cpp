class Solution {
public:
    const int m = 1e9+7;
    int specialTriplets(vector<int>& nums) {
        map<int, int> pre;
        map<int, int> next;
        int c=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            next[nums[i]]++;
        }
        pre[nums[0]]++;
        next[nums[0]]--;
        for(int i=1;i<n-1;i++)
        {
            next[nums[i]]=next[nums[i]]-1;
            int x = nums[i]*2;
            if(pre[x]>0 && next[x]>0)
            c=(c+((long long)pre[x]*next[x])%m)%m;
            pre[nums[i]]++;
        }
        cout<<next.size();
        return c;
    }
};