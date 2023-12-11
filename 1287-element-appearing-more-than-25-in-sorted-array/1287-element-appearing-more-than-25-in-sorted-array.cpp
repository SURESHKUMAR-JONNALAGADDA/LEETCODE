class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int c=1;
        int m=1;
        int mi=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]==arr[i])
            {
                c++;
            }
            else
            {
                if(m<c)
                {
                    m=c;
                    mi=arr[i-1];
                }
                c=1;
            }
        }
        if(m<c)
        {
            m=c;
            mi=arr[arr.size()-1];
        }
        return mi;
    }
};