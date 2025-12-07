class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second>1)
            return x.first;
        }
        return -1;
    }
};