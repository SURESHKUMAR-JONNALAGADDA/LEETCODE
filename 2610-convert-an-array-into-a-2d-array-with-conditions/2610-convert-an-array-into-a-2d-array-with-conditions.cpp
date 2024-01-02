class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>v;
        while(!mp.empty())
        {
            vector<int>a;
            for (auto it = mp.begin(); it != mp.end(); ) {
                if (it->second >= 1) {
                    a.push_back(it->first);
                    it->second--;
                    if (it->second == 0) {
                        it = mp.erase(it);
                    } else {
                        ++it;
                    }
                } else {
                    ++it;
                }
            }
            v.push_back(a);
        }
        return v;
    }
};