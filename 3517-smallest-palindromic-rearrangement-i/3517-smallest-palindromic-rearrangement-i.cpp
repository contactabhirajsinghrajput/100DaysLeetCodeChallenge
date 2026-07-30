class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
    for(char c : s) freq[c - 'a']++;

    // Count odd frequencies
    int oddCount = 0;
    char oddChar = '\0';
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) {
            oddCount++;
            oddChar = 'a' + i;
        }
    }

    if(oddCount > 1) return "NO"; // Not possible

    string left = "";
    for(int i = 0; i < 26; i++) {
        left.append(freq[i] / 2, 'a' + i);
    }

    string right = left;
    reverse(right.begin(), right.end());

    string result = left;
    if(oddCount == 1) result.push_back(oddChar);
    result += right;

    return result;
    }
};