class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int m=0;
        for(int i=0;i<colors.length();i++)
        {
            if(colors[i]==colors[i+1])
            {
                cout<<m<<endl;
                cout<<neededTime[i+1];
                m+=min(neededTime[i],neededTime[i+1]);
                neededTime[i+1]=max(neededTime[i],neededTime[i+1]);
                cout<<neededTime[i+1];
            }
        }
        return m;
    }
};