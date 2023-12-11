class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.length();
    
    if (n <= 1) {
        return s; // Single character or empty string is a palindrome
    }

    // Create a table to store whether substrings are palindromes
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    int start = 0; // Start index of the longest palindrome
    int maxLength = 1; // Length of the longest palindrome

    // Check substrings of length 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check substrings of length 3 or more
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1; // Ending index of substring

            // Check if the substring is a palindrome
            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = true;

                // Update the longest palindrome information
                start = i;
                maxLength = len;
            }
        }
    }

    return s.substr(start, maxLength);
}
};