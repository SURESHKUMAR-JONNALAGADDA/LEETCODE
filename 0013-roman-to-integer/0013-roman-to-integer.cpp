class Solution 
{
    
public:
    int romanToInt(string s) {
        map<char,int>r;
        r.insert({'I',1});
        r.insert({'V',5});
        r.insert({'X',10});
        r.insert({'L',50});
        r.insert({'C',100});
        r.insert({'D',500});
        r.insert({'M',1000});
        int sum=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(r[s[i]]>=r[s[i+1]])
            {
                sum+=r[s[i]];
            }
            else
            {
                sum-=r[s[i]];
            }
        }
        sum+=r[s[s.length()-1]];
        return sum;
    }
};