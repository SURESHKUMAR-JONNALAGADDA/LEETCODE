class Solution {
public:
    int climbStairs(int n) {
        vector<int>a(n);
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 3;
        if(n>=3)
        a[0]=1;
        a[1]=2;
        a[2]=3;
        for(int i=3;i<n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        return a[n-1];
    }
};