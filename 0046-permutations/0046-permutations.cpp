class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        do 
        {
            vector<int>v;
            for(int i=0;i<nums.size();i++)
                v.push_back(nums[i]);
            vec.push_back(v);
        }
        while(next_permutation(nums.begin(),nums.end()));
        return vec;
    }
};