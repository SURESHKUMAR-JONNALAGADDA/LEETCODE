class Solution {
public:
    
int countDigits(int n){
    int total = 0;
    
    while (n > 0){
        n = n / 10;
        total++;
    }
    return total;
}
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(countDigits(nums[i])%2==0)
            {
                c++;
            }
        }
        return c;
    }
};