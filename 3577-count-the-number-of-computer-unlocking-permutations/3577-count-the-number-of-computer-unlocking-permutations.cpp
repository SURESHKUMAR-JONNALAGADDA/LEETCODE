class Solution {
public:
    const int M = 1e9+7; 
    int fact(int n,vector<int> &f)
    {
        if(f[n]==-1)
        return ((long long)n*fact(n-1,f))%M;
        else
        return f[n];
    }
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int m =complexity[0];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            m=min(m,complexity[i]);
            mp[complexity[i]]++;
        }
        cout<<complexity[0]<<mp[m]<<m;
        if(complexity[0]!=m||mp[m]>1)
        return 0;
        mp[m]=0;
        vector<int> f(n+2,-1);
        f[0]=-1;
        f[1]=1;
        f[2]=2;
        return fact(n-1, f)%M;
    }
};