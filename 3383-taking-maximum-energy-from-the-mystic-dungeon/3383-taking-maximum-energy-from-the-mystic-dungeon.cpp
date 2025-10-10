class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int>v(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if((i+k)>=n)
            {
                v[i] = energy[i];
            }
            else
            {
                v[i] = energy[i]+v[i+k];
            }
        }
        int m = v[0];
        for(int i=1;i<n;i++)
        {
            m = max(m,v[i]);
        }
        return m;

    }
};