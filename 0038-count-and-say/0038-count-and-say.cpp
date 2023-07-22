class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string s=countAndSay(n-1);
        int m=s.length();
        string rs;
        for(int i=0;i<m;i++)
        {
            int c=1;
            while(s[i]==s[i+1] && i<m-1)
            {
                c++;
                i++;
            }
            rs+=to_string(c);
            rs+=s[i];
        }
        return rs;
    }
};