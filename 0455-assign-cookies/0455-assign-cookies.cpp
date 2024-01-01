class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m=s.size();
        if(m==0)
            return 0;
        int c=0,j=0,i=0;
        while(i<n&&j<m)
        {
            if(g[i]>s[j])
            {
                j++;
            }
            else
            {
            i++;
            c++;
            j++;
            }
        }
        return c;
    }
};