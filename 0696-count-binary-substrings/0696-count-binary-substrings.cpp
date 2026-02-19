class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0,a=0,b=0;
        int n = s.length();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1')
            {
                a++;
            }
            else
            {
                b++;
            }
            if(s[i]!=s[i+1]&& a!=0&&b!=0)
            {
                ans+=min(a,b);
                if(s[i]=='1')
                b=0;
                else
                a=0;
            }
        }
        if(s[n-1]=='1')
        a++;
        else
        b++;
        ans+=min(a,b);
        return ans;
    }
};