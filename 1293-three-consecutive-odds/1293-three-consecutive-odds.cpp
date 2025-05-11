class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1)
            {
                c++;
            }
            else
            {
                if(c>=3)
                return true;
                c=0;
            }
        }
        if(c>=3)
        return true;
        else
        return false;
    }
};