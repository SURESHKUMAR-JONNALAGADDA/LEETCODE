class Solution {
public:
    int count(string s)
    {
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                c++;
        }
        return c;
    }
    int numberOfBeams(vector<string>& bank) {
        int x,y,n=bank.size(),sum=0;
        x=count(bank[0]);
        for(int i=1;i<n;i++)
        {
            y=count(bank[i]);
            sum+=(x*y);
            if(y>0)
                x=y;
        }
        return sum;
    }
};