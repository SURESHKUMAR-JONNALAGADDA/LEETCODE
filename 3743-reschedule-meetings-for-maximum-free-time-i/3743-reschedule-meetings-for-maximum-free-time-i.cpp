class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size();
        vector<int> gap(n+1,-1);
        gap[0]=startTime[0]-0;
        for(int i=1;i<n;i++)
        {
            gap[i]=startTime[i]-endTime[i-1];
        }
        gap[n]=eventTime-endTime[n-1];
        int s=0;
        for(int i=0;i<k+1;i++)
        {
            s+=gap[i];
        }
        int m=s;
        for(int i=k+1;i<=n;i++)
        {
            s=s+gap[i];
            s=s-gap[i-k-1];
            m=max(m,s);
        }
        return m;
    }
};