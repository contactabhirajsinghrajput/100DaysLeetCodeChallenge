class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        
        // Step 1: Count frequency
        for (char c : word) {
            freq[c - 'a']++;
        }
        
        // Step 2: Sort frequencies in descending order
        sort(freq.begin(), freq.end(), greater<int>());
        
        int pushes = 0;
        int pos = 0; // position index
        
        // Step 3: Assign characters optimally
        for (int f : freq) {
            if (f == 0) break; // no more characters
            int cost = pos / 8 + 1; // position cost (1 for first row, 2 for second, etc.)
            pushes += f * cost;
            pos++;
        }
        
        return pushes;
    }
};