class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int start = 0, end = 0;  // Pointers for the sliding window
    unordered_set<char> charSet;  // Set to keep track of unique characters
    int maxLength = 0;
    int maxStart = 0;

    while (end < n) {
        if (charSet.find(s[end]) == charSet.end()) {
            // If the character is not in the set, add it to the set
            charSet.insert(s[end]);
            end++;

            // Update the maximum length and starting index of the unique substring
            if (end - start > maxLength) {
                maxLength = end - start;
                maxStart = start;
            }
        } else {
            // If the character is in the set, remove the first character from the set
            charSet.erase(s[start]);
            start++;
        }
    }

    return maxLength;
    }
};