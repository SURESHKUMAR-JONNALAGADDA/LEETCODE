class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = prices.size();
        int n= prices.size();
        long long c=1;
        for(int i=1;i<n;i++)
        {
            if(prices[i-1]-prices[i]==1)
            {
                c++;
            }
            else if(c>1)
            {
                ans+=(c*(c-1)/2);
                c=1;
            }
        }
        if(c>1)
        ans+=(c*(c-1)/2);
        return ans;
    }
};