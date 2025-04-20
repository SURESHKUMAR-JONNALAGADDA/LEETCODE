class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int>mp;
        int c=0;
        for(int i=0;i<answers.size();i++)
        {
            if(answers[i]!=0)
            mp[answers[i]]++;
            else
            c++;
        }
        
        for(auto p:mp)
        {
            c+=ceil((double)p.second / (p.first + 1)) * (p.first + 1);
        }
        return c;
    }
};