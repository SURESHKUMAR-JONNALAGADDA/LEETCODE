class Solution {
public:
    int op(string s,char c,char x)
    {
        cout<<s<<" "<<c<<x<<endl;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            s[i]=x;
        }
        return stoi(s);
    }
    int maxDiff(int num) {
        string s=to_string(num);
        int n=s.length();
        cout<<n<<endl;
        int x,y;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='9')
            {
                x=op(s,s[i],'9');
                break;
            }
            if(i==n-1)
            {
                x=num;
            }
        }
        cout<<s<<"hh"<<endl;
        if(s[0]=='1')
        {
            cout<<s<<"sg"<<endl;
        for(int i=1;i<n;i++)
        {
            cout<<s[i+1]<<"gg";
            if(s[i]!='0'&&s[i]!=s[0])
            {
                y=op(s,s[i],'0');
                break;
            }
            if(i==n-1)
            {
                y=num;
            }
        }
        }
        else
        y=op(s,s[0],'1');
        cout<<x<<" "<<y<<endl;
        return x-y;
    }
};