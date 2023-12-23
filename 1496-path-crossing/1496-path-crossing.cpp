class Solution {
public:
    bool check(vector<vector<int>>&v,int k,int j)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i][0]<<v[i][1]<<endl;
            if(v[i][0]==k&& v[i][1]==j)
            {
                return true;
            }
        }
        return false;
    }
    bool isPathCrossing(string path) {
        vector<vector<int>>v;
        int i=0,j=0;
        vector<int>v1;
        v1.push_back(i);
        v1.push_back(j);
        v.push_back(v1);
        int n=path.length();
        for(int k=0;k<n;k++)
        {
            if(path[k]=='N')
                j++;
            else if(path[k]=='S')
                j--;
            else if(path[k]=='E')
                i++;
            else
                i--;
            if(!check(v,i,j))
            {
                vector<int>v1;
                v1.push_back(i);
                v1.push_back(j);
                v.push_back(v1);
            }    
            else
                return true;
        }
        return false;
        
    }
};