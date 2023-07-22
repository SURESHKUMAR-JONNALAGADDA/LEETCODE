class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int op=0,cp=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                op++;
            else
            {
                if(op!=0)
                {
                    op--;
                }
                else
                {
                    cp++;
                }
            }
        }
        return abs(op+cp);
        
    }
};