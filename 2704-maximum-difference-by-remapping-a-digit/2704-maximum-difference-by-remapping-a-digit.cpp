class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n = s.size(), mn = 0, mx = 0, i = 0;
        char c = s[0];
        while(i < n) {
            mn = mn * 10 + (s[i] == c ? 0: s[i] - '0');
            i++;
        }
        i = 0;
        while(i < n && s[i] == '9') {
            mx = mx * 10 + 9;
            i++;
        }
        c = s[i];
        while(i < n) {
            mx = mx * 10 + (s[i] == c ? 9: s[i] - '0');
            i++;
        }
        return mx - mn;
    }
};