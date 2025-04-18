class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        if(n==2)
        return "11";
        string r=countAndSay(n-1);
        cout<<r<<endl;
        int l=r.length();
        string rs="";
        int c=0;
        for(int i=1;i<=l;i++)
        {
            c=1;
            while(r[i-1]==r[i]&& i<l)
            {
                c++;
                i++;
            }
            rs+=to_string(c);
            rs+=r[i-1];
        }
        return rs;
    }
};